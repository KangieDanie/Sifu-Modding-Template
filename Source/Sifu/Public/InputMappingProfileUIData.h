#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InputMappingProfileUIData.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class SIFU_API UInputMappingProfileUIData : public UObject {
    GENERATED_BODY()
public:
    UInputMappingProfileUIData();
};

