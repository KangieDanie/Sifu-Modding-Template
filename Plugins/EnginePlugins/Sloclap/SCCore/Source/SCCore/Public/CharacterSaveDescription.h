#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Timespan
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "CharacterSaveDescription.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FCharacterSaveDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FString m_SaveName;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FTimespan m_TimePlayed;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FDateTime m_SaveTimeStamp;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool m_bIsABackupSnapshot;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    bool m_bIsValid;
    
    FCharacterSaveDescription(){};
};

