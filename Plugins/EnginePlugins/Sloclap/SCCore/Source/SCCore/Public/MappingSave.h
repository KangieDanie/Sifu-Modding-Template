#pragma once
#include "CoreMinimal.h"
#include "MappingSave.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FMappingSave {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, SaveGame)
    FName m_KeyName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FName m_ActionName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    bool m_bIsAxis;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    float m_fScale;
    
    FMappingSave(){};
};

