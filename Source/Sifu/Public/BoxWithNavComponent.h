#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BoxComponent
#include "Components/BoxComponent.h"
#include "BoxWithNavComponent.generated.h"

class UNavArea;

UCLASS(EditInlineNew)
class SIFU_API UBoxWithNavComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetAreaClass(TSubclassOf<UNavArea> _navArea);
    
    UBoxWithNavComponent();
};

