#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "TargetSettings.h"
#include "TargetSettingsDB.generated.h"

UCLASS(Abstract)
class SIFU_API UTargetSettingsDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTargetSettings m_Settings;
    
    UTargetSettingsDB();
};

