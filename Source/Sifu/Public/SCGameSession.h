#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameSession
#include "GameFramework/GameSession.h"

#include "SCGameSession.generated.h"

UCLASS()
class SIFU_API ASCGameSession : public AGameSession {
    GENERATED_BODY()
public:
    ASCGameSession();
};

