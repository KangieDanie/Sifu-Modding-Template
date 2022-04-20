#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "InteractionTextStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FInteractionTextStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_FirstText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    InputAction m_eInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_SecondText;
    
    FInteractionTextStruct();
};

