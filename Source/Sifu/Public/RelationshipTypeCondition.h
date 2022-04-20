#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "ERelationshipTypes.h"
#include "RelationshipTypeCondition.generated.h"

UCLASS()
class SIFU_API URelationshipTypeCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<ERelationshipTypes> m_AllowedRelationshipTypes;
    
    URelationshipTypeCondition();
};

