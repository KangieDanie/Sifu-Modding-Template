#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataTableRowHandle
#include "Engine/DataTable.h"
#include "CarriedProps.generated.h"

USTRUCT(BlueprintType)
struct FCarriedProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FDataTableRowHandle m_props;
    
    SIFU_API FCarriedProps();
};

