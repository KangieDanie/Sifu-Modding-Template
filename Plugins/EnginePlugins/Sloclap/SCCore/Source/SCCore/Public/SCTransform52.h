#pragma once
#include "CoreMinimal.h"
#include "SCRotation4.h"
#include "SCLocation48.h"
#include "SCTransform52.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCTransform52 {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FSCLocation48 m_Location;
    
    UPROPERTY(SaveGame)
    FSCRotation4 m_Rotation;
    
    FSCTransform52(){};
};

