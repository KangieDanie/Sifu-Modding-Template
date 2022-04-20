#pragma once
#include "CoreMinimal.h"
#include "SubZoneShortcutStruct.generated.h"

USTRUCT(BlueprintType)
struct FSubZoneShortcutStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsAShortCut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iZone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iSubZone;
    
    SIFU_API FSubZoneShortcutStruct();
};

