#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCUserDefinedEnumHandler
#include "SCUserDefinedEnumHandler.h"
#include "AttackIKProfileInfos.generated.h"

USTRUCT(BlueprintType)
struct FAttackIKProfileInfos {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_Profile;
    
    UPROPERTY(EditAnywhere)
    FName m_AnimCurveName;
    
    SIFU_API FAttackIKProfileInfos();
};

