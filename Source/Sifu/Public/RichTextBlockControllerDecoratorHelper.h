#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EControllerIconStyles.h"
#include "InputAction.h"
#include "EControllerIconAxisTypes.h"
#include "RichTextBlockControllerDecoratorHelper.generated.h"

UCLASS(BlueprintType)
class URichTextBlockControllerDecoratorHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FString BPF_GetInputActionValueName(InputAction _eAction);
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetControllerIconStylesValueName(EControllerIconStyles _eStyle);
    
    UFUNCTION(BlueprintPure)
    static FString BPF_GetControllerIconAxisTypesValueName(EControllerIconAxisTypes _eAxis);
    
    URichTextBlockControllerDecoratorHelper();
};

