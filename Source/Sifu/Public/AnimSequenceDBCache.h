#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimSequenceDBCache.generated.h"

class UAnimSequenceEntryDB;
class ABaseWeapon;

USTRUCT(BlueprintType)
struct FAnimSequenceDBCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSubclassOf<ABaseWeapon>, UAnimSequenceEntryDB*> m_Sequences;
    
    SIFU_API FAnimSequenceDBCache();
};

