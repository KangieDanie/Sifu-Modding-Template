#pragma once
#include "CoreMinimal.h"
#include "MainAttackComboDB.generated.h"

USTRUCT(BlueprintType)
struct FMainAttackComboDB {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FName> m_ComboQuadrantsFrontLeftXls;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FName> m_ComboQuadrantsFrontRightXls;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FName> m_ComboQuadrantsBackRightXls;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FName> m_ComboQuadrantsBackLeftXls;
    
    SIFU_API FMainAttackComboDB();
};

