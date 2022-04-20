#pragma once
#include "CoreMinimal.h"
#include "EOSNativePlatform.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EOSNativePlatformDiscord.generated.h"

UCLASS()
class UEOSNativePlatformDiscord : public UObject, public IEOSNativePlatform {
    GENERATED_BODY()
public:
    UEOSNativePlatformDiscord();
    
    // Fix for true pure virtual functions not being implemented
};

