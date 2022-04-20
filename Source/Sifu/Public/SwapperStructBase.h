#pragma once
#include "CoreMinimal.h"
#include "SwapperStructBase.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSwapperStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_bInProgress1Or2;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_bInProgress1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_bInProgress2;
    
public:
    FSwapperStructBase();
};

