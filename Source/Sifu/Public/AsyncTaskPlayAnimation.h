#pragma once
#include "CoreMinimal.h"
#include "MenuAsyncActionBase.h"
//CROSS-MODULE INCLUDE: UMG EUMGSequencePlayMode
#include "Blueprint/UserWidget.h"

#include "AsyncTaskPlayAnimation.generated.h"

class UAsyncTaskPlayAnimation;
class UObject;
class UWidgetAnimation;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskPlayAnimationOnFinished);

UCLASS()
class UAsyncTaskPlayAnimation : public UMenuAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskPlayAnimationOnFinished OnFinished;
    
    UFUNCTION()
    void OnTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskPlayAnimation* BPF_PlayTransitionAnimationAsync(UObject* _menu, UWidgetAnimation* _inAnimation, TEnumAsByte<EUMGSequencePlayMode::Type> _ePlayMode, bool _bDisableInputs);
    
    UAsyncTaskPlayAnimation();
};

