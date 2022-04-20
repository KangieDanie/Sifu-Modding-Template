#pragma once
#include "CoreMinimal.h"
#include "EKeyboardLayout.h"
#include "MappingProfileInfos.generated.h"

class UInputMappingProfileDB;

USTRUCT(BlueprintType)
struct FMappingProfileInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EKeyboardLayout m_eKeyboardLayout;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInputMappingProfileDB> m_Profile;
    
    SIFU_API FMappingProfileInfos();
};

