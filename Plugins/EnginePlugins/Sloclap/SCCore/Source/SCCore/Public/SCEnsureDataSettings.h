#pragma once
#include "CoreMinimal.h"
#include "DeveloperSettingsModule.h"
#include "UObject/SoftObjectPath.h"
#include "AdvisersStruct.h"
#include "SCEnsureDataSettings.generated.h"

UCLASS(DefaultConfig, Config=SCCore)
class SCCORE_API USCEnsureDataSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath m_Enums[2];
    
    UPROPERTY(Config, EditAnywhere)
    FText m_adviserTooltipText;
    
    UPROPERTY(Config, EditAnywhere)
    FText m_buildLog;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, FAdvisersStruct> m_ensureCategoryAdvisers;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bUseNameInsteadOfPath;
    
protected:
    UPROPERTY(Config, EditAnywhere)
    bool m_bRegroupUnderOneCategory;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_mainCategoryName;
    
public:
    USCEnsureDataSettings();
};

