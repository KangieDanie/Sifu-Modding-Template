#pragma once
#include "CoreMinimal.h"
#include "DialogActionArrayContainer.generated.h"

class UDialogActionBase;

USTRUCT(BlueprintType)
struct FDialogActionArrayContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<UDialogActionBase*> m_Array;
    
    SCDIALOGMANAGERPLUGIN_API FDialogActionArrayContainer();
};

