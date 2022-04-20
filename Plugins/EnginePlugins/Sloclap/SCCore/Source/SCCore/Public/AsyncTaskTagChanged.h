#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "AsyncTaskTagChanged.generated.h"

class UAbilitySystemComponent;
class UAsyncTaskTagChanged;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskTagChangedOnTagEnd);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskTagChangedOnTagBegin);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskTagChangedOnTagUpdate);

UCLASS()
class SCCORE_API UAsyncTaskTagChanged : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskTagChangedOnTagBegin OnTagBegin;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskTagChangedOnTagUpdate OnTagUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FAsyncTaskTagChangedOnTagEnd OnTagEnd;
    
protected:
    UPROPERTY(Export)
    UAbilitySystemComponent* m_ASC;
    
public:
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskTagChanged* ListenForTagsChange(UAbilitySystemComponent* _abilitySystemComponent, FGameplayTagContainer _tags);
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
    UAsyncTaskTagChanged();
};

