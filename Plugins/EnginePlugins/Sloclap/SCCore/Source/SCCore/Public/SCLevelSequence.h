#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceDirector.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ESCSequenceBlendViewState.h"
#include "ESequenceBindingType.h"
#include "SCLevelSequence.generated.h"

class UAnimMontage;
class APlayerController;
class USCLevelSequenceDirectorData;
class ACameraActor;
class ASCSequenceAnchor;
class AActor;
class UAnimSequence;
class ACharacter;
class ULevelSequence;
class UMaterialParameterCollection;
class ALevelSequenceActor;

UCLASS()
class SCCORE_API USCLevelSequence : public ULevelSequenceDirector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    USCLevelSequenceDirectorData* m_DataAsset;
    
    UPROPERTY(Transient)
    ACameraActor* m_ActorCamera;
    
    UPROPERTY(Transient)
    ASCSequenceAnchor* m_ActorAnchor;
    
    UFUNCTION()
    void OnPreStop();
    
    UFUNCTION()
    void OnPlay();
    
private:
    UFUNCTION()
    void OnPause();
    
protected:
    UFUNCTION()
    void OnFinished();
    
    UFUNCTION()
    void OnAnyCharacterPlayMontage(UAnimMontage* _playedMontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnregisterCharacter(FName _roleName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_TeleportToActor(const AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_TeleportTo(const FVector& _location, const FRotator& _rotation, bool _bAddLocation);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveMaterialParameterBinding(int32 _iHandle);
    
public:
    UFUNCTION(BlueprintPure)
    APlayerController* BPF_PlayerController() const;
    
    UFUNCTION(BlueprintPure)
    ESCSequenceBlendViewState BPF_GetViewBlendState() const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetRoleFromActor(AActor* _actor) const;
    
    UFUNCTION(BlueprintPure)
    USCLevelSequenceDirectorData* BPF_GetData() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* BPF_GetCharacterOwner() const;
    
    UFUNCTION(BlueprintPure)
    ACameraActor* BPF_GetCamera();
    
    UFUNCTION(BlueprintPure)
    static UAnimSequence* BPF_GetAnimSequenceFromLevelSequence(const ULevelSequence* _levelSequence, FName _roleName);
    
    UFUNCTION(BlueprintPure)
    ASCSequenceAnchor* BPF_GetAnchor();
    
protected:
    UFUNCTION(BlueprintCallable)
    AActor* BPF_GetActorFromRole(FName _roleName);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_BlendToSequenceView(float _fTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_BlendToPlayerView(float _fTime);
    
    UFUNCTION(BlueprintCallable)
    int32 BPF_AddMaterialParameterBinding(UMaterialParameterCollection* _collection, FName _parameterName, ESequenceBindingType _eBinding);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OnRegisterActor(AActor* _actor, FName _role, ALevelSequenceActor* _sequenceActor, FName& _outAnchorBone);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnCreated(ALevelSequenceActor* _sequenceActor, ACharacter* _playerCharacter, ACameraActor* _camera);
    
public:
    USCLevelSequence();
};

