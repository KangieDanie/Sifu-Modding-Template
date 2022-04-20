#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "Engine/DataTable.h"
#include "CarriedPropDataRow.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SIFU_API FCarriedPropDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_LocatorName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> m_ClassToSpawn;
    
    FCarriedPropDataRow();
};

