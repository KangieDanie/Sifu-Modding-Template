#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCAnimOrderServiceSettings.generated.h"

class UOrderService;

USTRUCT(BlueprintType)
struct FSCAnimOrderServiceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOrderService> m_OrderService;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisable;
    
    SIFU_API FSCAnimOrderServiceSettings();
};

