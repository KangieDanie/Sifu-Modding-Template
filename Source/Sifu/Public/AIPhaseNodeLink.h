#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "AIPhaseNodeLink.generated.h"

USTRUCT(BlueprintType)
struct FAIPhaseNodeLink {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid m_Guid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_Name;
    
    SIFU_API FAIPhaseNodeLink();
};

