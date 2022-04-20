#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
#include "ComboAIConditionFindActorsEnvQueryResult.h"
//CROSS-MODULE INCLUDE: AIModule AIDynamicParam
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "ComboAIConditionFindActorsEnvQuery.generated.h"

class UEnvQuery;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComboAIConditionFindActorsEnvQueryOnEnvQueryFinished, const TArray<FComboAIConditionFindActorsEnvQueryResult>&, _result);

UCLASS(Abstract, EditInlineNew)
class SIFU_API UComboAIConditionFindActorsEnvQuery : public UAIComboCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FComboAIConditionFindActorsEnvQueryOnEnvQueryFinished OnEnvQueryFinished;
    
protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* m_QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    float m_fQueryResultLifetime;
    
    UPROPERTY(EditAnywhere)
    bool m_bResetResultsOnFailure;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> m_QueryParameters;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_FillQueryParameters(TArray<FAIDynamicParam>& _outParams) const;
    
public:
    UComboAIConditionFindActorsEnvQuery();
};

