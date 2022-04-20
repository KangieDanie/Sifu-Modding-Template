#pragma once
#include "CoreMinimal.h"
#include "ERelationshipTypes.h"
#include "HUDUserWidget.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "TargetableWidget.generated.h"

class USceneComponent;
class AActor;
class UWidget;

UCLASS(EditInlineNew)
class SIFU_API UTargetableWidget : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bSetVisibleWhenRelatedActorSet;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetRelatedActor(AActor* _actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAttachedWidget(UWidget* _widget);
    
public:
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetRelatedActor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_AddAttachedWidget(UWidget* _widget, FVector _vOffset3D, FVector2D _vOffset2D, USceneComponent* _sceneComponent, FName _socket);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_RelatedActorRelationshipChanged(ERelationshipTypes _eRelation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_RelatedActorChanged(AActor* _actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAIPhaseChanged(int32 _iPreviousPhase, int32 _iPhase, FName _archetypeName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_FightDetectionWarning();
    
    UTargetableWidget();
};

