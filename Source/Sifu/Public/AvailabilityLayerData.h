#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "InputContext.h"
#include "AvailabilityLayerCombinations.h"
#include "InputAction.h"
#include "AvailabilityLayerData.generated.h"

UCLASS()
class SIFU_API UAvailabilityLayerData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    InputContext m_eContext;
    
    UPROPERTY(EditAnywhere)
    TArray<FAvailabilityLayerCombinations> m_Combinations;
    
    UPROPERTY(EditAnywhere)
    bool m_bInvertSelection;
    
    UPROPERTY(EditAnywhere)
    TArray<InputAction> m_inputActionArray;
    
    UAvailabilityLayerData();
};

