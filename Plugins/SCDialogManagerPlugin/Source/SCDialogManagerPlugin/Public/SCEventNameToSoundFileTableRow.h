#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCEventNameToSoundFileTableRow.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCEventNameToSoundFileTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SoundName;
    
    FSCEventNameToSoundFileTableRow();
};

