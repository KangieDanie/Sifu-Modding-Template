#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BindablePropertyBase.generated.h"

class UBindablePropertyBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBindablePropertyBase_OnUpdateFromModel, UBindablePropertyBase*, _property);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBindablePropertyBase_OnPropertyUpdate, UBindablePropertyBase*, _property);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBindablePropertyBase_OnPropertyPreUpdate, UBindablePropertyBase*, _property);

UCLASS(Abstract, BlueprintType)
class SIFU_API UBindablePropertyBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, Transient)
    FBindablePropertyBase_OnUpdateFromModel m_OnUpdateFromModel;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FBindablePropertyBase_OnPropertyUpdate m_OnPropertyUpdate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FBindablePropertyBase_OnPropertyPreUpdate m_OnPropertyPreUpdate;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetOwner(UObject* _owner);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsValid() const;
    
    UBindablePropertyBase();
};

