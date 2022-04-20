#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SignificanceManager SignificanceManager
#include "SignificanceManager.h"
#include "SCSignificanceManager.generated.h"

UCLASS()
class SIFU_API USCSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
    USCSignificanceManager();
};

