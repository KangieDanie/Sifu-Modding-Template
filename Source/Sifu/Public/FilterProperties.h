#pragma once
#include "CoreMinimal.h"
#include "EScreenLocation.h"
#include "FilterProperties.generated.h"

USTRUCT(BlueprintType)
struct FFilterProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool m_bUserConfigured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FText m_FilterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float m_fExposure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float m_fVignette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float m_fGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float m_fFilterWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float m_fFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    uint8 m_uiAspectRatioIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    uint8 m_uiLogoIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EScreenLocation m_eLogoScreenLocation;
    
    SIFU_API FFilterProperties();
};

