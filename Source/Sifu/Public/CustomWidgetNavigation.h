#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "CustomWidgetNavigationData.h"
#include "CustomWidgetNavigation.generated.h"

UCLASS(BlueprintType)
class SIFU_API UCustomWidgetNavigation : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FCustomWidgetNavigationData m_CustomNavigationConfig;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_RestoreNavigationConfig();
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsAnalogNavigationEnabled();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyNavigationConfig();
    
    UCustomWidgetNavigation();
};

