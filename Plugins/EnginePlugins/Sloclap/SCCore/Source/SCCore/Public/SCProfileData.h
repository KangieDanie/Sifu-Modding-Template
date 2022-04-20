#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "CharacterSaveDescription.h"
#include "MappingSave.h"
#include "SCProfileData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FDateTime m_SaveTimeStamp;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TArray<FCharacterSaveDescription> m_SaveListNames;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FString m_FirstSave;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<FMappingSave> m_Mapping;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString m_AudioCulture;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString m_TextCulture;
    
    FSCProfileData(){};
};

