#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCAnimNotifyState.h"
#include "OrderServiceNotifyState.generated.h"

class UOrderService;
class UOrderServiceActivationConditions;

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UOrderServiceNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bTickFrozen;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderService> m_ServiceClass;
    
    UPROPERTY(EditAnywhere, Instanced)
    UOrderService* m_ServiceInstanced;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderServiceActivationConditions> m_activationCondition;
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<UOrderService> GetServiceClass(bool _bIncludeInstanced) const;
    
    UOrderServiceNotifyState();
};

