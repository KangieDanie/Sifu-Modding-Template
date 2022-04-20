#pragma once
#include "CoreMinimal.h"
#include "MappingID.h"
#include "ECaptureInputStep.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "InputMappingData.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CaptureInputAction.generated.h"

class UCaptureInputAction;
class UInputMappingWidgetData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCaptureInputActionOnStepStarted, const FInputMappingData&, _result, ECaptureInputStep, _NewStep);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCaptureInputActionOnSuccess, const FInputMappingData&, _result, ECaptureInputStep, _NewStep);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCaptureInputActionOnUpdate, const FInputMappingData&, _result, ECaptureInputStep, _NewStep);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCaptureInputActionOnCancel);

UCLASS()
class SIFU_API UCaptureInputAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCaptureInputActionOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FCaptureInputActionOnUpdate OnUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FCaptureInputActionOnStepStarted OnStepStarted;
    
    UPROPERTY(BlueprintAssignable)
    FCaptureInputActionOnCancel OnCancel;
    
private:
    UPROPERTY()
    UInputMappingWidgetData* m_Data;
    
public:
    UFUNCTION(BlueprintCallable)
    static UCaptureInputAction* BPF_CaptureInput(const UInputMappingWidgetData* _data, const FMappingID& _item, FInputMappingData _baseInputData, int32 _iSlodID, bool _bCaptureAxis, float _fMouseAxisThreshold, int32 _iControllerTypes);
    
    UCaptureInputAction();
};

