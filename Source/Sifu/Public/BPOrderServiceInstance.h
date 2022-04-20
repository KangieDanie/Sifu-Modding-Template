#pragma once
#include "CoreMinimal.h"
#include "BPOrderServiceInstance.generated.h"

class ABaseCharacter;

USTRUCT(BlueprintType)
struct FBPOrderServiceInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<ABaseCharacter> m_Owner;
    
    SIFU_API FBPOrderServiceInstance();
};

