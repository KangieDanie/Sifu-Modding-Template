#pragma once
#include "CoreMinimal.h"
#include "MappingProfileInfos.h"
#include "MappingProfileList.generated.h"

USTRUCT(BlueprintType)
struct FMappingProfileList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMappingProfileInfos> m_MappingProfiles;
    
    SIFU_API FMappingProfileList();
};

