#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "TargetableWidgetUpdaterComponent.generated.h"

class UTargetableWidget;
class AActor;

UCLASS(BlueprintType)
class SIFU_API UTargetableWidgetUpdaterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTargetableWidget> m_TargetWidgetToUse;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxDisplayDist;
    
    UPROPERTY(Export, Transient)
    TArray<UTargetableWidget*> m_WidgetPool;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnRegisterTargetActor(AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTargetActor(AActor* _actor);
    
private:
    UFUNCTION()
    void OnLeavingMap();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateWidgetVisibility();
    
    UFUNCTION(BlueprintCallable)
    UTargetableWidget* BPF_GetAssociatedWidget(AActor* _actor);
    
    UTargetableWidgetUpdaterComponent();
};

