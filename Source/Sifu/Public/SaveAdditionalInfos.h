#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore ECharacterGender
#include "ECharacterGender.h"
#include "SaveAdditionalInfos.generated.h"

USTRUCT(BlueprintType)
struct FSaveAdditionalInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 m_iAge;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FName m_MapTag;
    
    SIFU_API FSaveAdditionalInfos();
};

