#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "Engine/DataTable.h"
#include "EmoteShopDataRow.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FEmoteShopDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_RowName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iGMLevelRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iGleamLevelRequired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iFragmentPrice;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iPrestigePointPrice;
    
    FEmoteShopDataRow();
};

