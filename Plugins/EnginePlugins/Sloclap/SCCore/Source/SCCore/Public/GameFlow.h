#pragma once
#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameFlowNode.h"
#include "GameFlow.generated.h"

class UGameFlowNode;

UCLASS(BlueprintType)
class SCCORE_API UGameFlow : public UObject, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGameFlowNode* m_currentNode;
    
    UPROPERTY(Transient)
    UGameFlowNode* m_pendingNode;
    
    UPROPERTY(VisibleAnywhere)
    FName m_defaultMapTag;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, UGameFlowNode*> m_MapNodes;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetMapOption();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveMapOption(FGameplayTag _optionToRemove);
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer BPF_GetMapOptions() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddMapOption(FGameplayTag _optionToAdd);
    
    UGameFlow();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

