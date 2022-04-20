#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "Engine/DataTable.h"
#include "BaseAttackDataRow.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FBaseAttackDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_RealAttackName;
    
    FBaseAttackDataRow();
};

