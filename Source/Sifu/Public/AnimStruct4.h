#pragma once
#include "CoreMinimal.h"
#include "VariableWeightInfo.h"
#include "AnimStruct4.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStruct4 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_bInProgress1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_bInProgress2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_bInProgress3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_bInProgress4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_bInProgress1Or2Or3Or4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVariableWeightInfo m_variableWeightLayers1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVariableWeightInfo m_variableWeightLayers2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVariableWeightInfo m_variableWeightLayers3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVariableWeightInfo m_variableWeightLayers4;
    
    FAnimStruct4();
};

