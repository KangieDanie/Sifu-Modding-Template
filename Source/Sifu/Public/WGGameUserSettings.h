#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameUserSettings
#include "GameFramework/GameUserSettings.h"
//CROSS-MODULE INCLUDE: DLSSBlueprint UDLSSMode
//#include "UDLSSMode.h"
#include "WGGameUserSettings.generated.h"

UCLASS()
class SIFU_API UWGGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
   /* UPROPERTY(Config)
    UDLSSMode DLSSQuality;*/
    
    UWGGameUserSettings();
};

