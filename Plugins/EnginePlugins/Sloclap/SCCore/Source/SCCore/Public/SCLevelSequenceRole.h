#pragma once
#include "CoreMinimal.h"
#include "SCLevelSequenceRole.generated.h"

USTRUCT()
struct SCCORE_API FSCLevelSequenceRole {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FName m_Name;
    
    UPROPERTY(Config, EditAnywhere)
    FName m_AnchorJoint;
    
    FSCLevelSequenceRole(){};
};

