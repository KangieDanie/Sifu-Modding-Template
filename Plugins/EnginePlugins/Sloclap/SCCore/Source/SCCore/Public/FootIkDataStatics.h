#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCFootIkData.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FootIkDataStatics.generated.h"

UCLASS(BlueprintType)
class SCCORE_API UFootIkDataStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static bool BPF_IsFootPlanted(const FSCFootIkData& _inFootIkData);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_GetLastFoundGround(const FSCFootIkData& _inFootIkData, FVector& _vOutLocation, FVector& _vOutNormal);
    
    UFootIkDataStatics();
};

