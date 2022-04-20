#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "AnimStructOverride.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructOverride : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    int32 m_iAnimIndex;
    
    FAnimStructOverride();
};

