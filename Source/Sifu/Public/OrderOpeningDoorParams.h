#pragma once
#include "CoreMinimal.h"
#include "OrderParams.h"
#include "NetStructOpeningDoor.h"
#include "OrderOpeningDoorParams.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UOrderOpeningDoorParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FNetStructOpeningDoor m_Params;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FNetStructOpeningDoor m_TransientParams;
    
    UOrderOpeningDoorParams();
};

