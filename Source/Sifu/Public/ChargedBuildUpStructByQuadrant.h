#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "ChargedBuildUpStructGenericInfos.h"
#include "ChargedBuildUpStructByQuadrant.generated.h"

USTRUCT(BlueprintType)
struct FChargedBuildUpStructByQuadrant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimContainer m_BuildUpByQuadrant[4];
    
    UPROPERTY(EditAnywhere)
    FChargedBuildUpStructGenericInfos m_Infos;
    
    SIFU_API FChargedBuildUpStructByQuadrant();
};

