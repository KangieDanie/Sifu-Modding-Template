#pragma once
#include "CoreMinimal.h"
#include "SwapperStructBase.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "AnimStructBase.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructBase : public FSwapperStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FAnimContainer m_AnimContainer1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FAnimContainer m_AnimContainer2;
    
    FAnimStructBase();
};

