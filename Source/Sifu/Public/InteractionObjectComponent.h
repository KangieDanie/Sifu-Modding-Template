#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: Engine CollisionProfileName
//CROSS-MODULE INCLUDE: SCCore SCPoolableActorComponent
#include "Engine/CollisionProfile.h"
#include "Components/ActorComponent.h"

#include "SCPoolableActorComponent.h"
#include "InteractionTextStruct.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "InteractionObjectComponent.generated.h"

class UInteractionObjectComponent;
class UOrderParams;
class APlayerController;
class USceneComponent;
class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionObjectComponentOnUseInteractionObject, APlayerController*, PlayerController);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInteractionObjectComponentOnTextChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractionObjectComponentOnUseInteractionObjectFailed, APlayerController*, PlayerController, FText, FailReason);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionObjectComponentOnDestroyComponent, UInteractionObjectComponent*, _component);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionObjectComponentOnBecomeCurrentInteractionObject, APlayerController*, PlayerController);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionObjectComponentOnNoLongerCurrentInteractionObject, APlayerController*, PlayerController);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInteractionObjectComponentOnUsableChanged);

UCLASS(BlueprintType)
class SIFU_API UInteractionObjectComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractionObjectComponentOnUseInteractionObject OnUseInteractionObject;
    
    UPROPERTY(BlueprintAssignable)
    FInteractionObjectComponentOnUseInteractionObjectFailed OnUseInteractionObjectFailed;
    
    UPROPERTY(BlueprintAssignable)
    FInteractionObjectComponentOnBecomeCurrentInteractionObject OnBecomeCurrentInteractionObject;
    
    UPROPERTY(BlueprintAssignable)
    FInteractionObjectComponentOnNoLongerCurrentInteractionObject OnNoLongerCurrentInteractionObject;
    
    UPROPERTY(BlueprintAssignable)
    FInteractionObjectComponentOnTextChanged OnTextChanged;
    
    UPROPERTY(BlueprintAssignable)
    FInteractionObjectComponentOnUsableChanged OnUsableChanged;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomWalkInteractionDist;
    
    UPROPERTY(EditAnywhere)
    float m_fCustomWalkInteractionDist;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomRunInteractionDist;
    
    UPROPERTY(EditAnywhere)
    float m_fCustomRunInteractionDist;
    
    UPROPERTY(BlueprintAssignable)
    FInteractionObjectComponentOnDestroyComponent OnDestroyComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCollisionProfileName m_InteractionTraceResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIgnoreOwnerOnHint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIgnoreChildActorsOnTrace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UOrderParams* m_orderParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bVisibleOnlyWhenUsable;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_bIsUsable;
    
    UPROPERTY(EditAnywhere)
    FInteractionTextStruct m_InteractionTextStruct;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseLockedText;
    
    UPROPERTY(EditAnywhere)
    FText m_LockedText;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseGenericUI;
    
    UPROPERTY(EditAnywhere)
    int32 m_iPriority;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseInteractionHint;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideInteractionHintDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fInteractionHintDistanceOverride;
    
    UPROPERTY(EditAnywhere)
    bool m_bConstraintToViewport;
    
    UPROPERTY(EditAnywhere)
    FVector2D m_vViewportConstraint;
    
protected:
    UFUNCTION()
    void ForceUse();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetVisualComponent(USceneComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMainDetectionPrimitive(UPrimitiveComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsUsable(bool _bCanUse);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInteractionTextStruct(const FInteractionTextStruct& _struct);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsUsingLockedText() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsUsable() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* BPF_GetVisualComponent() const;
    
    UFUNCTION(BlueprintPure)
    FText BPF_GetLockedText() const;
    
    UFUNCTION(BlueprintPure)
    FInteractionTextStruct BPF_GetInteractionTextStruct() const;
    
    UInteractionObjectComponent();
    
    // Fix for true pure virtual functions not being implemented
};

