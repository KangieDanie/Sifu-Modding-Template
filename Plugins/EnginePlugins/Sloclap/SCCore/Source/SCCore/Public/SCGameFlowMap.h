#pragma once
#include "CoreMinimal.h"
#include "ESCGameInstanceState.h"
#include "UObject/SoftObjectPath.h"
#include "SCGameFlowMap.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCGameFlowMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    ESCGameInstanceState m_State;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FName m_StateName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSoftObjectPath m_Map;
    
    FSCGameFlowMap(){};
};

