#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SCVideoLightManager.generated.h"

class UMediaSource;
class UCanvas;
class UMaterialInterface;
class ULocalLightComponent;
class UTextureRenderTarget2D;
class UMaterialInstanceDynamic;
class UMediaTexture;
class UCurveLinearColor;

UCLASS(BlueprintType)
class SCCORE_API USCVideoLightManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UTextureRenderTarget2D*> m_RTChain;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_SamplerMaterialInstanceDynamic;
    
    UPROPERTY()
    UMaterialInterface* m_SamplerMaterialBase;
    
    UPROPERTY()
    UCanvas* m_CanvasTarget;
    
    UFUNCTION(BlueprintCallable)
    static void PreCache(UMediaTexture* MediaTex, UMediaSource* MediaSource, UMaterialInterface* SamplerMaterialBase);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ExportCurveFromLight(ULocalLightComponent* LightComponentToFind, UCurveLinearColor* curveToFill);
    
    USCVideoLightManager();
};

