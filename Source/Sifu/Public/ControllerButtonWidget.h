#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "EControllerIconStyles.h"
#include "ButtonUserWidget.h"
#include "MappingID.h"
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "InputContext.h"
#include "EControllerIconAxisTypes.h"
#include "InputMappingNode.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "ControllerButtonWidget.generated.h"

class UGenericInputData;
class UTexture2D;

UCLASS(EditInlineNew)
class UControllerButtonWidget : public UButtonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iInputSlotIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange m_AxisScaleRange;
    
    UPROPERTY()
    InputContext m_eInputContext;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EControllerIconAxisTypes m_eAxisType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUpdateOnControllerTypeChanged;
    
    UPROPERTY()
    TArray<UGenericInputData*> m_InputDatas;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EControllerIconStyles m_IconStyle;
    
    UPROPERTY()
    InputAction m_eAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMappingID m_MappingID;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetMappingID(const FMappingID& _mappingID, bool _bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInputSlotIndex(int32 _iSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInputDatas(TArray<UGenericInputData*> _InputDatas);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInputData(UGenericInputData* _InputData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIconStyle(EControllerIconStyles _eIconStyle, bool _bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAxisType(EControllerIconAxisTypes _eAxisType, bool _bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetAction(InputAction _eAction, bool _bRefresh);
    
protected:
    UFUNCTION(BlueprintPure)
    bool BPF_IsKeyboardInput();
    
    UFUNCTION(BlueprintCallable)
    void BPF_GetUIKeyInfos(bool& _bOutFoundIcon, FInputMappingNode& _outNode, TSoftObjectPtr<UTexture2D>& _icon, FKey& _key, FText& _replacementText, bool& _bShowText, FString& _outSeparator);
    
    UFUNCTION(BlueprintPure)
    FText BPF_GetKeyDisplayName(const FKey& _key);
    
    UFUNCTION(BlueprintPure)
    void BPF_GetInputNode(FInputMappingNode& Node);
    
public:
    UControllerButtonWidget();
};

