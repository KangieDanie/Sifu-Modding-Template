#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "LipSync_Phrase.h"
#include "PhrasesList.generated.h"

class UDataTable;

UCLASS()
class TEXT2LIPSYNC_API UPhrasesList : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FName, FLipSync_Phrase> Data;
    
public:
    UFUNCTION()
    bool LoadFromDataTable(UDataTable* DataTable);
    
    UFUNCTION()
    void GetPhraseFromList(const FName& Key, FLipSync_Phrase& ReturnValue) const;
    
    UPhrasesList();
};

