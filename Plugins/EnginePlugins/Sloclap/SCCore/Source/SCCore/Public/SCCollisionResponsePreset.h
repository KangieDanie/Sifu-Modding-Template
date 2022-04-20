#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "SCCollisionResponseTemplate.h"
#include "SCCollisionResponsePreset.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCCollisionResponsePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseProfile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseDefaultProfile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCollisionProfileName m_Profile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCCollisionResponseTemplate m_Template;
    
    FSCCollisionResponsePreset(){};
};

