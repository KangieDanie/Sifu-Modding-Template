#pragma once
#include "CoreMinimal.h"
#include "SCSaveObject.h"
#include "SCGameData.h"
#include "SCSaveObjectGameData.generated.h"

UCLASS()
class SCCORE_API USCSaveObjectGameData : public USCSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FSCGameData m_SCSavedData;
    
    USCSaveObjectGameData();
};

