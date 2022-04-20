#pragma once
#include "CoreMinimal.h"
#include "GameplayOptionsMenu.h"
#include "GraphOptionsMenu.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UGraphOptionsMenu : public UGameplayOptionsMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 m_iCurrentResIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FString> m_ResList;
    
protected:
    UPROPERTY(EditAnywhere)
    bool m_bSetCameraInStartIdlePosition;
    
private:
    UFUNCTION()
    void OnRequestUIChange();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ResolutionChanged(int32 _iIndex);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCurrentDisplayMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AutoDetectSettings();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AcceptSetting();
    
    UGraphOptionsMenu();
};

