#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "LockableDoor.generated.h"

class USceneComponent;
class APawn;
class USkeletalMeshComponent;
class UAnimationAsset;
class USCSaveGameComponent;
class ULevelSequence;
class AController;
class AFightingCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockableDoor_OnDoorEndClose, const AActor*, _lockableDoorActor);

UCLASS()
class SIFU_API ALockableDoor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USkeletalMeshComponent* m_SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneComponent* m_RootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCloseDistThreshold;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_vHandleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USCSaveGameComponent* m_SaveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bShouldStayOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* m_levelSequenceWay1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* m_levelSequenceWay2;
    
    UPROPERTY(BlueprintAssignable)
    FLockableDoor_OnDoorEndClose m_OnDoorEndClose;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanLockNavBuild;
    
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool m_bLocked;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    bool m_bOpened;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FName m_sequenceRoleName;
    
    UFUNCTION(BlueprintCallable)
    void SetOpened(bool bOpened);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetNonOccluding(bool bNonOccluding);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetDoorInOpenedState(UAnimationAsset* _openingAnimAsset);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BPF_ReplayRecordObjectInteraction(APawn* _Instigator, FName _way);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPF_ReplayObjectInteractionEvent(APawn* _Instigator, AController* _controller, FName _way);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveNavBuildLock();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_OpenDoor(AFightingCharacter* _interactor, UAnimationAsset* _openingAnimAsset, UAnimationAsset* _closingAnimAsset);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseDoor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_AddNavBuildLock();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OpenedStatusChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDoorAnimationFinished();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_MustMirrorOpeningAnim(const AFightingCharacter* _Instigator, bool _bInteraction1) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_LockedStatusChanged();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetOpeningDoorInfo(const AFightingCharacter* _Instigator, bool _bInteraction1, bool& _outPlayAnimOnCharacter, bool& _outMustMirrorAnimOnCharacter) const;
    
    ALockableDoor();
};

