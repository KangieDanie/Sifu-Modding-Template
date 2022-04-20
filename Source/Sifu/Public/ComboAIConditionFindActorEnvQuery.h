#pragma once
#include "CoreMinimal.h"
#include "ComboAIConditionFindActorsEnvQuery.h"
#include "ComboAIConditionFindActorEnvQuery.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UComboAIConditionFindActorEnvQuery : public UComboAIConditionFindActorsEnvQuery {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_StoreResultInBlackBoardKey;
    
    UPROPERTY(EditAnywhere)
    FName m_StoreResultInBlackBoardKeyVector;
    
public:
    UComboAIConditionFindActorEnvQuery();
};

