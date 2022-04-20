#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCBehaviorTreeComponent
#include "SCBehaviorTreeComponent.h"
#include "AIBehaviorTreeComponent.generated.h"

UCLASS()
class SIFU_API UAIBehaviorTreeComponent : public USCBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UAIBehaviorTreeComponent();
};

