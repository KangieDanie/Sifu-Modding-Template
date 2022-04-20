#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCCharacter
#include "SCCharacter.h"
//CROSS-MODULE INCLUDE: AIModule AISightTargetInterface
#include "Perception/AISightTargetInterface.h"
#include "EControllerNature.h"
#include "DynamicMaterialsPerType.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "DynamicMaterialInput.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: SCCore ECharacterGender
#include "ECharacterGender.h"
#include "EFXMaterials.h"
#include "InputContext.h"
#include "InputAction.h"
#include "ERelationshipTypes.h"
#include "BaseCharacter.generated.h"

class USCDialogComponent;
class USocialComponent;
class UCharacterTextLipSync;
class UOrderComponent;
class USkinTonesDB;
class UPrimitiveComponent;
class AActor;
class UMaterialInstanceDynamic;
class APlayerState;
class APlayerController;

UCLASS()
class SIFU_API ABaseCharacter : public ASCCharacter, public IAISightTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USocialComponent* m_SocialComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UOrderComponent* m_OrderComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCharacterTextLipSync* m_LipSyncComp;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iBuildUpMaxShrinkingFrames;
    
    UPROPERTY(EditDefaultsOnly)
    USkinTonesDB* m_SkinTones;
    
    UPROPERTY(Transient)
    TArray<FDynamicMaterialsPerType> m_DynamicMaterialsPerFxType;
    
    UPROPERTY(Export, VisibleAnywhere)
    USCDialogComponent* m_DialogComponent;
    
public:
    UFUNCTION()
    void OnLandedRaw(const FHitResult& _Impact);
    
protected:
    UFUNCTION()
    void OnCapsuleBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateDynamicMaterials(TArray<FDynamicMaterialInput> _ParametersInputs);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetVectorValueOnMaterials(FName _parameterName, FLinearColor _value);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetScalarValueOnMaterials(FName _parameterName, float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGenderInSave(ECharacterGender _eNewGender, bool _bSendTrackingData);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_PopAvailabilityLayer(int32 _iId, InputContext _eInputContext);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsCurrentGameModeCoopAlly(AActor* _otherActor);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsAvailable(InputAction _eAction) const;
    
    UFUNCTION(BlueprintPure)
    USocialComponent* BPF_GetSocialComponent() const;
    
    UFUNCTION(BlueprintCallable)
    ERelationshipTypes BPF_GetRelationship(AActor* _actor);
    
    UFUNCTION(BlueprintPure)
    UOrderComponent* BPF_GetOrderComponent() const;
    
    UFUNCTION(BlueprintPure)
    ECharacterGender BPF_GetGenderInSave() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMaterialInstanceDynamic*> BPF_GetCurrentMaterialInstances();
    
    UFUNCTION(BlueprintPure)
    EControllerNature BPF_GetControllerNature() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateDynamicMaterials(EFXMaterials _eFxType, bool _bFromItemLoading);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_PlayerStateInitialized(APlayerState* _playerState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ControllerReplicated(APlayerController* _controller);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_BodyPartsUpdated();
    
    ABaseCharacter();
    
    // Fix for true pure virtual functions not being implemented
};

