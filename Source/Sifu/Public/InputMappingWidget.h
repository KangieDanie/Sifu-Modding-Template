#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "ERemappingAllowedInputTypes.h"
#include "EMappableFieldScaleTypes.h"
#include "AsyncTextureStruct.h"
#include "InputMappingWidget.generated.h"

class UButtonUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputMappingWidget_OnWaitingForRemappingInput, FName, _ActionName, EMappableFieldScaleTypes, _ScaleType);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputMappingWidget_OnFocusReceived, FName, _ActionName, EMappableFieldScaleTypes, _ScaleType);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputMappingWidget_OnFocusLost, FName, _ActionName, EMappableFieldScaleTypes, _ScaleType);

UCLASS(EditInlineNew)
class SIFU_API UInputMappingWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInputMappingWidget_OnWaitingForRemappingInput m_OnWaitingForRemappingInput;
    
    UPROPERTY(BlueprintAssignable)
    FInputMappingWidget_OnFocusReceived m_OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable)
    FInputMappingWidget_OnFocusLost m_OnFocusLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_MappingStringName;
    
    UPROPERTY(BlueprintReadOnly)
    FString m_MappingNameStringNegativeScale;
    
    UPROPERTY(BlueprintReadOnly)
    FString m_MappedKeyName;
    
    UPROPERTY(BlueprintReadOnly)
    FString m_MappedKeyNameNegativeScale;
    
    UPROPERTY(BlueprintReadOnly)
    FAsyncTextureStruct m_KeyInputTexture;
    
    UPROPERTY(BlueprintReadOnly)
    FAsyncTextureStruct m_KeyInputTextureNegativeScale;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsMappingFieldForAxis;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bForceDisplayAsSingleField;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bCheckDuplicateKey;
    
    UPROPERTY(BlueprintReadOnly)
    EMappableFieldScaleTypes m_eSelectedFieldScaleType;
    
    UPROPERTY(BlueprintReadOnly)
    EMappableFieldScaleTypes m_eFocusedFieldScaleType;
    
    UPROPERTY(BlueprintReadOnly)
    ERemappingAllowedInputTypes m_eRemappingAllowedType;
    
    UFUNCTION(BlueprintCallable)
    void BPF_WaitingKeyInput(EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetRemappingButton(UButtonUserWidget* _remappingButton, EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnRemappingFieldGettingFocusLost(EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnRemappingFieldGettingFocused(EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintCallable)
    FName BPF_GetActionName();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ShouldDisplayTextureKeyRatherThanTextKeyForKeyboard(bool _bUseTexture, EMappableFieldScaleTypes _eScaleType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRemappingStarted(bool _bIsKeyboardRemapping);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnRemappingFinished(bool _bIsKeyboardRemapping, FKey _newMappingKey);
    
    UInputMappingWidget();
};

