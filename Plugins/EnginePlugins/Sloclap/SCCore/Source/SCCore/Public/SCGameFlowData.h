#pragma once
#include "CoreMinimal.h"
#include "ESCGameInstanceState.h"
#include "UObject/SoftObjectPath.h"
#include "SCGameFlowData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCGameFlowData {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    ESCGameInstanceState m_eInitialState;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath m_InitialMap;
    
    FSCGameFlowData(){};
};

