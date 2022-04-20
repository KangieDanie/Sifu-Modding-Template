#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SCChannelCollisionResponse.h"
#include "SCCollisionResponseBuilder.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCCollisionResponseBuilder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionResponse> m_eDefaultCollisionResponse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSCChannelCollisionResponse> m_eChannelResponses;
    
    FSCCollisionResponseBuilder(){};
};

