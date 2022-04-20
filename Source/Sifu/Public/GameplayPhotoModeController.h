#pragma once
#include "CoreMinimal.h"
#include "BaseReplayController.h"
#include "GameplayPhotoModeController.generated.h"

class UObject;
class ASCPlayerController;

UCLASS()
class SIFU_API AGameplayPhotoModeController : public ABaseReplayController {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void BPF_LeavePhotoMode();
    
public:
    UFUNCTION(BlueprintPure)
    ASCPlayerController* BPF_GetOriginalPlayerController() const;
    
    UFUNCTION(BlueprintCallable)
    static void BPF_EnterPhotoMode(const UObject* _worldContextObject);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPhotoModeDeactivationRequested();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnPhotoModeActivated();
    
public:
    AGameplayPhotoModeController();
};

