#pragma once
#include "CoreMinimal.h"
#include "SCSaveObject.h"
#include "SCProfileData.h"
#include "CharacterSaveDescription.h"
#include "SCSaveObjectPlayerProfile.generated.h"

UCLASS()
class SCCORE_API USCSaveObjectPlayerProfile : public USCSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FSCProfileData m_BaseProfileData;
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveSave(const FString& _saveName);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsSaveValid(const FString& _saveName, bool _bTreatBackup) const;
    
    UFUNCTION(BlueprintPure)
    FCharacterSaveDescription BPF_FindSaveByFileName(const FString& _fileName, bool& _bFound) const;
    
    USCSaveObjectPlayerProfile();
};

