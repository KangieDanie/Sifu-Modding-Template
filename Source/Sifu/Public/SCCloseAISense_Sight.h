#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule AISense_Sight
#include "Perception/AISense_Sight.h"
#include "SCCloseAISense_Sight.generated.h"

UCLASS()
class SIFU_API USCCloseAISense_Sight : public UAISense_Sight {
    GENERATED_BODY()
public:
    USCCloseAISense_Sight();
};

