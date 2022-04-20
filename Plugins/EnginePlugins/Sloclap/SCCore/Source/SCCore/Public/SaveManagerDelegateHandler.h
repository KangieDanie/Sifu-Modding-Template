#pragma once
#include "CoreMinimal.h"
#include "ELoadResult.h"
#include "ESaveResult.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SaveManagerDelegateHandler.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaveManagerDelegateHandler_OnSaveStatusChanged, bool, _bSaveInProgress, ESaveResult, _eSaveResult);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveManagerDelegateHandler_OnSaveLoaded, ELoadResult, _eLoadResult);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaveManagerDelegateHandler_OnProfileLoaded, ELoadResult, _eLoadResult);

UCLASS()
class SCCORE_API USaveManagerDelegateHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSaveManagerDelegateHandler_OnSaveStatusChanged m_OnSaveStatusChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSaveManagerDelegateHandler_OnSaveLoaded m_OnSaveLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FSaveManagerDelegateHandler_OnProfileLoaded m_OnProfileLoaded;
    
    USaveManagerDelegateHandler();
};

