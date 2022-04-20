#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCDialogData.h"
#include "SCDialogLineTableRow.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCDialogLineTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSCDialogData> DialogsVariations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LinePriority;
    
    FSCDialogLineTableRow();
};

