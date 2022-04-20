#pragma once
#include "CoreMinimal.h"
#include "UsableItem.h"
#include "VortexDamageItem.generated.h"

UCLASS()
class SIFU_API AVortexDamageItem : public AUsableItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxDistanceToTarget;
    
    AVortexDamageItem();
};

