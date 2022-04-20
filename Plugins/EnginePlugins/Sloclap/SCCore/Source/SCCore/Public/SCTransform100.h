#pragma once
#include "CoreMinimal.h"
#include "SCTransform52.h"
#include "SCScale48.h"
#include "SCTransform100.generated.h"

USTRUCT()
struct SCCORE_API FSCTransform100 : public FSCTransform52 {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FSCScale48 m_Scale3D;
    
    FSCTransform100(){};
};

