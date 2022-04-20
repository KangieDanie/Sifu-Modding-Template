#pragma once
#include "CoreMinimal.h"
#include "EControllerIconAxisTypes.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "EControllerIconStyles.h"
#include "InputAction.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "ControllerButtonInterface.generated.h"

class UWidget;

UINTERFACE(Blueprintable)
class UControllerButtonInterface : public UInterface {
    GENERATED_BODY()
};

class IControllerButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_SetInputAction(InputAction _eAction, UWidget* _owner, EControllerIconStyles _eIconStyle, EControllerIconAxisTypes _eAxisType, const FSCUserDefinedEnumHandler& _drawingStyle);
    
};

