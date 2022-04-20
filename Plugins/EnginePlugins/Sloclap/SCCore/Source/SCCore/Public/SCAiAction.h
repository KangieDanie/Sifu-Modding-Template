#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SCAIActionMemoryEntryHandler.h"
#include "EAIActionScheduleCondition.h"
#include "SCTypedValue.h"
#include "SCAiAction.generated.h"

class UBehaviorTree;
class ASCCharacter;
class USCAIComponent;
class UBlackboardComponent;

UCLASS(Abstract, Blueprintable)
class SCCORE_API USCAiAction : public UObject, public ISCAIActionMemoryEntryHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UBehaviorTree* m_BehaviorTreeAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAIActionScheduleCondition m_eScheduleCondition;
    
    UFUNCTION(BlueprintPure)
    void BPF_SetBlackBoardValueAsVector(FName _key, const FVector& _vValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_SetBlackBoardValueAsObject(FName _key, UObject* _value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_SetBlackBoardValueAsInt(FName _key, int32 _iValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_SetBlackBoardValueAsFloat(FName _key, float _fValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_SetBlackBoardValueAsBool(FName _key, bool _bValue) const;
    
    UFUNCTION(BlueprintPure)
    USCAIComponent* BPF_GetOwnerAiComponent() const;
    
    UFUNCTION(BlueprintPure)
    ASCCharacter* BPF_GetOwner() const;
    
public:
    UFUNCTION(BlueprintPure)
    void BPF_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const;
    
protected:
    UFUNCTION(BlueprintPure)
    FVector BPF_GetBlackBoardValueAsVector(FName _key) const;
    
    UFUNCTION(BlueprintPure)
    UObject* BPF_GetBlackBoardValueAsObject(FName _key) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetBlackBoardValueAsInt(FName _key) const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetBlackBoardValueAsFloat(FName _key) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetBlackBoardValueAsBool(FName _key) const;
    
    UFUNCTION(BlueprintPure)
    UBlackboardComponent* BPF_GetBlackBoardComponent() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_Finish(bool _bSucceeded, const FString& _message);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_CancelPendingActions(USCAIComponent* _aiComponent);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel(const FString& _message);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnOrderStarted(FName _orderParamsName, uint8 _uiOrderId);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnOrderFinished(FName _orderParamsName, uint8 _uiOrderId);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnNamedEvent(FName _eventName);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnFinished(bool _bSucceeded);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnBehaviorTreeInjected(UBlackboardComponent* _blackBoardComponent);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    FString BPE_GetName() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_Execute(UBlackboardComponent* _blackBoardComponent);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_CanPerform(const USCAIComponent* _aiComponent) const;
    
    USCAiAction();
    
    // Fix for true pure virtual functions not being implemented
};

