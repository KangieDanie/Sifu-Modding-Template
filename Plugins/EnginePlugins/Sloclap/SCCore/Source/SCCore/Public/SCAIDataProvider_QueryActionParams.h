#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider_QueryParams.h"
#include "GameplayTagContainer.h"
#include "SCAIDataProvider_QueryActionParams.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SCCORE_API USCAIDataProvider_QueryActionParams : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bFetchOnce;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag m_ActionInjectionTag;
    
    USCAIDataProvider_QueryActionParams();
};

