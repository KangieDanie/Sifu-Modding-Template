#pragma once
#include "CoreMinimal.h"
#include "MainAttackComboRealNamesDB.generated.h"

USTRUCT(BlueprintType)
struct FMainAttackComboRealNamesDB {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FText> m_ComboQuadrantsFrontLeftXls;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FText> m_ComboQuadrantsFrontRightXls;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FText> m_ComboQuadrantsBackRightXls;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FText> m_ComboQuadrantsBackLeftXls;
    
    SIFU_API FMainAttackComboRealNamesDB();
};

