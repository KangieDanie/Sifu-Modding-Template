#pragma once
#include "CoreMinimal.h"
#include "EOSNativePlatform.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EOSNativePlatformSteam.generated.h"

UCLASS()
class UEOSNativePlatformSteam : public UObject, public IEOSNativePlatform {
    GENERATED_BODY()
public:
    UEOSNativePlatformSteam();
    
    // Fix for true pure virtual functions not being implemented
};

