#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine PlayerStart
#include "GameFramework/PlayerStart.h"

#include "EPlayerScreenSide.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SCPlayerStart.generated.h"

class UMatineeCameraShake;
class USceneComponent;
class ULevelSequence;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSCPlayerStartOnGotoGameplaySequenceStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSCPlayerStartOnGotoGameplaySequenceFinished);

UCLASS()
class SIFU_API ASCPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSCPlayerStartOnGotoGameplaySequenceStarted OnGotoGameplaySequenceStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSCPlayerStartOnGotoGameplaySequenceFinished OnGotoGameplaySequenceFinished;
    
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<FName> m_levelsNameToLoad;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* m_AnchorSceneComponent;
    
    UPROPERTY(EditAnywhere)
    bool m_bKeepBackGroundDuringStartupMenu;
    
    UPROPERTY(VisibleAnywhere)
    FVector m_vCameraForwardAtIntroEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_PlayerStartGameplayTag;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_bForFirstSpawn;
    
    UPROPERTY(EditAnywhere)
    EPlayerScreenSide m_ePlayerScreenSide;
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* m_IdleStartupSequence;
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* m_StartupSequence;
    
    UPROPERTY(EditAnywhere)
    float m_fCameraBlendDurationBetweenLoopAndGoto;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UMatineeCameraShake> m_CameraShakeClass;
    
public:
    UFUNCTION(BlueprintPure)
    bool BPF_WantKeepBackgroundDuringStartupMenu() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_PrepareSequence(int32 _sequenceID);
    
public:
    ASCPlayerStart();
};

