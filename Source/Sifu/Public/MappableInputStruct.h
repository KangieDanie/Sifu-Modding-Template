#pragma once
#include "CoreMinimal.h"
#include "ERemappingAllowedInputTypes.h"
#include "MappableInputStruct.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FMappableInputStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_UnrealMappingName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ERemappingAllowedInputTypes m_eRemappingAllowedInputType;
    
    UPROPERTY(EditAnywhere)
    FText m_DisplayedMappingNameText[2];
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsAxisMappingAllowed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bCheckDuplicateKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bForceDisplayAsSingleField;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fKeyToAxisMultScaleFactor;
    
    FMappableInputStruct();
};

