#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule AIDataProvider_QueryParams
#include "DataProviders/AIDataProvider_QueryParams.h"
#include "EWallJumpAttackParameter.h"
#include "AIDataProviderActionWallJumpAttack.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UAIDataProviderActionWallJumpAttack : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWallJumpAttackParameter m_eParameter;
    
    UAIDataProviderActionWallJumpAttack();
};

