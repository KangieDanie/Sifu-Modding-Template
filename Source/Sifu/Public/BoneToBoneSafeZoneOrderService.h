#pragma once
#include "CoreMinimal.h"
#include "SafeZoneOrderService.h"
#include "SafeZoneBonePair.h"
#include "BoneToBoneSafeZoneOrderService.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UBoneToBoneSafeZoneOrderService : public USafeZoneOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSafeZoneBonePair> m_bonePairList;
    
    UPROPERTY(EditAnywhere)
    float m_fForcedRatio;
    
    UBoneToBoneSafeZoneOrderService();
};

