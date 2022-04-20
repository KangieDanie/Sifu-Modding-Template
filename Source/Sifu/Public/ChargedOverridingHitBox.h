#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataTableRowHandle
#include "Engine/DataTable.h"
#include "ChargedOverridingHitBox.generated.h"

USTRUCT(BlueprintType)
struct FChargedOverridingHitBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_uiHitBoxToOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_HitRow;
    
    SIFU_API FChargedOverridingHitBox();
};

