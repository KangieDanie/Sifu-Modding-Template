#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCSaveObjectPlayerProfile
#include "SCSaveObjectPlayerProfile.h"
#include "ProfileData.h"
#include "WGSaveObjectPlayerProfile.generated.h"

UCLASS()
class SIFU_API UWGSaveObjectPlayerProfile : public USCSaveObjectPlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FProfileData m_WGProfileData;
    
    UWGSaveObjectPlayerProfile();
};

