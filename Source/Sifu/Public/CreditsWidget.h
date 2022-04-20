#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "CreditCompanyStruct.h"
#include "CreditsWidget.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UCreditsWidget : public UMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fScrollFactor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_iScrollPixelPerSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fSpeedFactorWithStick;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fScrollTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCreditCompanyStruct> m_Companies;
    
public:
    UCreditsWidget();
};

