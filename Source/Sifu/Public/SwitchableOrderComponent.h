#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EOrderType.h"
#include "FightingOrderComponent.h"
#include "SwitchableOrderComponent.generated.h"

class UOrderDB;

UCLASS()
class SIFU_API USwitchableOrderComponent : public UFightingOrderComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<EOrderType, TSubclassOf<UOrderDB>> m_ExtraOrderInfos;
    
public:
    USwitchableOrderComponent();
};

