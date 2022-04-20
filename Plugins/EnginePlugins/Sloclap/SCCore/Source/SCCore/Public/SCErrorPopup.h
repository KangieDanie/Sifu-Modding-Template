#pragma once
#include "CoreMinimal.h"
#include "SCErrorPopup.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCErrorPopup {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FText m_TextMessage;
    
    UPROPERTY(Config, EditAnywhere)
    FText m_TextConfirm;
    
    UPROPERTY(Config, EditAnywhere)
    FText m_TextCancel;
    
    FSCErrorPopup(){};
};

