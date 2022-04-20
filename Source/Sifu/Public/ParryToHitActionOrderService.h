#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OrderService.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "GameplayTagContainer.h"
#include "BPOrderServiceInstance.h"
#include "ParryToHitActionOrderService.generated.h"

class UBaseHitDetectionDB;
class UHitActionLauncher;

UCLASS(EditInlineNew)
class SIFU_API UParryToHitActionOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHitActionLauncher> m_hitActionLauncher;
    
    UPROPERTY(EditAnywhere)
    TArray<UBaseHitDetectionDB*> m_IgnoringHitDetectionDBs;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_IgnoringGameplayTagContainer;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnParryFailed(FBPOrderServiceInstance _description) const;
    
    UParryToHitActionOrderService();
};

