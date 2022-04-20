#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "SCVideoSpotLightComponent.generated.h"

class UCurveLinearColor;
class UMediaTexture;

UCLASS(EditInlineNew)
class SCCORE_API USCVideoSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_FilterAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMediaTexture* m_MediaTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLengthInSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveLinearColor* m_ColourCurve;
    
    UFUNCTION()
    void OnMediaOpen(const FString& _openedUrl);
    
    USCVideoSpotLightComponent();
};

