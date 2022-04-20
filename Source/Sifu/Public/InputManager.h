#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InputAction.h"
#include "InputManager.generated.h"

class UInputsDB;
class UInputPad;
class ASCPlayerController;

UCLASS(BlueprintType)
class SIFU_API UInputManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInputsDB* m_inputsDB;
    
private:
    UPROPERTY()
    TArray<UInputPad*> m_pads;
    
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_ResetAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_FlushAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ConsumeAction(UObject* _requester, const ASCPlayerController* _playerController, InputAction _eInputAction);
    
    UInputManager();
};

