#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: DeveloperSettings DeveloperSettings
#include "SCDebugSettings.generated.h"

UCLASS(Config=User)
class SIFU_API USCDebugSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    USCDebugSettings();
};

