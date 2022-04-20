#pragma once
#include "CoreMinimal.h"
#include "EOperationType.h"
#include "SCDialogCondition.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCDialogCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Context;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Key;
    
    UPROPERTY(EditAnywhere)
    FString Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOperationType Operation;
    
    FSCDialogCondition();
};

