#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore ECharacterGender
#include "ECharacterGender.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ECharacterStat.h"
#include "CharacterBuildDB.generated.h"

UCLASS()
class SIFU_API UCharacterBuildDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ECharacterGender m_eGender;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ECharacterStat, float> m_DefaultStats;
    
    UCharacterBuildDB();
};

