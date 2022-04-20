#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameViewportClient
#include "SCGameViewportClient.generated.h"

UCLASS(NonTransient)
class SIFU_API USCGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    USCGameViewportClient();
};

