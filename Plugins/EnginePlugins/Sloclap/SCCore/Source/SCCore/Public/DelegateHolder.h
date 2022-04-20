#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "DelegateHolder.generated.h"

class UParticleSystemComponent;

UCLASS()
class SCCORE_API UDelegateHolder : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION()
    void SytemCompleted(UParticleSystemComponent* Component);
    
    UDelegateHolder();
};

