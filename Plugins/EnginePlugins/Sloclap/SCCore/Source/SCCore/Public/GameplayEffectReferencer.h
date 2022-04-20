#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayEffectReferencer.generated.h"

class USCGameplayEffect;

UCLASS()
class SCCORE_API UGameplayEffectReferencer : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<USCGameplayEffect*> m_ListOfAllGameplayEffect;
    
public:
    UFUNCTION()
    void RetrieveAllGameplayEffects();
    
    UGameplayEffectReferencer();
};

