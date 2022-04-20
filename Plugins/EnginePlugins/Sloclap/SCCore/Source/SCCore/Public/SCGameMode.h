#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SCGameMode.generated.h"

class UGameplayEffect;

UCLASS(NonTransient)
class SCCORE_API ASCGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UGameplayEffect*> m_PlayerGameModeGameplayEffects;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsUsingPools;
    
    ASCGameMode();
};

