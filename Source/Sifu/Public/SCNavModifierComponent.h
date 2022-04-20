#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: NavigationSystem NavModifierComponent
#include "NavModifierComponent.h"
#include "SCNavModifierComponent.generated.h"

UCLASS()
class SIFU_API USCNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void BPF_CalcAndCacheBounds();
    
    USCNavModifierComponent();
};

