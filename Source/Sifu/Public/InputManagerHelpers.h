#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "InputAction.h"
#include "InputManagerHelpers.generated.h"

class UInputPad;
class ASCPlayerController;

UCLASS(BlueprintType)
class SIFU_API UInputManagerHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static UInputPad* BPF_GetControllerInputPad(ASCPlayerController* _playerController);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D BPF_GetActionVectorValue(ASCPlayerController* _player, InputAction _eAction, bool _bRaw);
    
    UFUNCTION(BlueprintCallable)
    static float BPF_GetActionValue(const ASCPlayerController* _player, InputAction _eAction, bool _bRaw);
    
    UInputManagerHelpers();
};

