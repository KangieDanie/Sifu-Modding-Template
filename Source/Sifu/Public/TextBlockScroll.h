#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "TextBlockScroll.generated.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;
class URetainerBox;
class UTextBlock;

UCLASS(EditInlineNew)
class UTextBlockScroll : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fRestartDelay;
    
    UPROPERTY(EditAnywhere)
    float m_fPixelPerSeconds;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_MaterialInstance;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_Material;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMargin;
    
    UFUNCTION(BlueprintNativeEvent)
    void BPF_SetOpacity(const float& _fOpacity);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ScrollTextIfNeeded(UTextBlock* _textBlock, URetainerBox* _retainerBox);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RestartScroll();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnScrollingStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnScrollingReset(bool _bScrollingNeeded);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnScrollingEnded();
    
    UTextBlockScroll();
};

