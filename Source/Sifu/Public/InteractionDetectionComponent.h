#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "BaseActorTargetConditionInstance.h"
#include "InteractionHintInfo.h"
#include "InteractionDetectionComponent.generated.h"

class UInteractionObjectComponent;
class AActor;

UCLASS(BlueprintType)
class SIFU_API UInteractionDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FBaseActorTargetConditionInstance m_CandidateObjectCondition;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAngleThresholdWalking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAngleThresholdRunning;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchFrontRangeWalking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchBackRangeWalking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchFrontRangeRunning;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchBackRangeRunning;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInteractionHintDist;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bShowOnlyVisibleHint;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bShowOnlyUsableHint;
    
    UPROPERTY(Export, Transient)
    TArray<UInteractionObjectComponent*> m_interactionHintToShow;
    
    UPROPERTY(Transient)
    TMap<UInteractionObjectComponent*, FInteractionHintInfo> m_interactionHintInfos;
    
public:
    UFUNCTION(BlueprintPure)
    TMap<UInteractionObjectComponent*, FInteractionHintInfo> BPF_GetInteractionHintInfos() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UInteractionObjectComponent*> BPF_GetInteractionHintComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetCurrentInteractiveObject() const;
    
    UFUNCTION(BlueprintPure)
    UInteractionObjectComponent* BPF_GetCurrentInteractiveComponent() const;
    
    UInteractionDetectionComponent();
};

