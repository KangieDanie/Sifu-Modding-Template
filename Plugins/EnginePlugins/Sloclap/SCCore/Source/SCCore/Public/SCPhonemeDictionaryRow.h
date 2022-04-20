#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPhonemeDictionary.h"
#include "SCPhonemeDictionaryRow.generated.h"

USTRUCT()
struct SCCORE_API FSCPhonemeDictionaryRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<EPhonemeDictionary> m_Phonemes;
    
    FSCPhonemeDictionaryRow(){};
};

