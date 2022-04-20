#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "AnimSequenceDBEntry.h"
#include "AnimSequenceEntryDB.generated.h"

class ABaseWeapon;

UCLASS(BlueprintType)
class SIFU_API UAnimSequenceEntryDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ABaseWeapon> m_WeaponClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAnimSequenceDBEntry> m_AnimSequences;
    
    UAnimSequenceEntryDB();
};

