#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterBlendSettings.generated.h"

class UMaterialParameterCollection;

USTRUCT(BlueprintType)
struct SCCORE_API FMaterialParameterBlendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* m_MPC;
    
    UPROPERTY(EditAnywhere)
    FName m_ParameterName;
    
    UPROPERTY(EditAnywhere)
    bool m_bInversed;
    
    FMaterialParameterBlendSettings(){};
};

