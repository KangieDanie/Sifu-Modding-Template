#pragma once
#include "CoreMinimal.h"
#include "InputPresetsEnumHandler.h"
#include "InputAction.h"
#include "InputContext.h"
#include "MappingID.generated.h"

USTRUCT(BlueprintType)
struct FMappingID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInputPresetsEnumHandler m_PresetID;
    
    UPROPERTY(EditAnywhere)
    InputAction m_eAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    InputContext m_eContext;
    
    UPROPERTY(EditAnywhere)
    bool m_bUsePreset;
    
    SIFU_API FMappingID();
};

