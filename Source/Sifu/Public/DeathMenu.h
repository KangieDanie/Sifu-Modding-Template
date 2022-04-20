#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "DeathMenu.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDeathMenu : public UMenuWidget {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_StandBackUp();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsGameover(bool _bGameOver);
    
    UFUNCTION(BlueprintCallable)
    void BPF_IncrementAge(int32 _iAgeIncrement);
    
public:
    UDeathMenu();
};

