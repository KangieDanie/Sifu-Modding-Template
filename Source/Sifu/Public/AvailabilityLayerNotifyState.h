#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
#include "EALBinaryOperation.h"
#include "AvailabilityLayerNotifyState.generated.h"

class UAvailabilityLayerData;

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UAvailabilityLayerNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAvailabilityLayerData* m_availabilityLayerData;
    
    UPROPERTY(EditAnywhere)
    EALBinaryOperation m_eOperation;
    
    UPROPERTY(EditAnywhere)
    int32 m_iPriority;
    
    UPROPERTY(EditAnywhere)
    FString m_alName;
    
    UAvailabilityLayerNotifyState();
};

