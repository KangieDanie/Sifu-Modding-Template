#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "AnimStructAttack.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructAttack : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_bStartBlendOut1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_bStartBlendOut2;
    
    FAnimStructAttack();
};

