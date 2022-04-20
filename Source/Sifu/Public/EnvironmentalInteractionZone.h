#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EnvironmentalInteractionZone.generated.h"

UCLASS()
class SIFU_API AEnvironmentalInteractionZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bFallEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnvironmentalTakedownEnabled;
    
    AEnvironmentalInteractionZone();
};

