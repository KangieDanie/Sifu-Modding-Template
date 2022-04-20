#pragma once
#include "CoreMinimal.h"
#include "AISituationNamedActor.generated.h"

USTRUCT(BlueprintType)
struct FAISituationNamedActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Name;
    
    SIFU_API FAISituationNamedActor();
};

