#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "AnimStructDeath.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructDeath : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_bCancelled;
    
    FAnimStructDeath();
};

