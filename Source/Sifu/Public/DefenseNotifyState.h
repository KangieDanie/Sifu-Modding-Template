#pragma once
#include "CoreMinimal.h"
#include "HitRequest.h"
#include "SCAnimNotifyState.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "ImpactResult.h"
#include "DefenseNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UDefenseNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString m_alName;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnHitDefense(const FHitResult& _hitResult, FImpactResult& _Impact, const FHitRequest& _hitRequest, bool& _bShouldDismiss) const;
    
    UDefenseNotifyState();
};

