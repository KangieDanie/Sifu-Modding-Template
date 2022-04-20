#pragma once
#include "CoreMinimal.h"
#include "ContextualDefenseInfluenceNode.h"
#include "EDodgeDirectionType.h"
#include "DefenseInfluenceNodeDodge.generated.h"

UCLASS()
class SIFU_API UDefenseInfluenceNodeDodge : public UContextualDefenseInfluenceNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bOverrideDirection;
    
    UPROPERTY(EditAnywhere)
    EDodgeDirectionType m_eDirectionTypeOverride;
    
public:
    UDefenseInfluenceNodeDodge();
};

