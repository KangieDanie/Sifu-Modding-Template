#pragma once
#include "CoreMinimal.h"
#include "Engine/NetConnection.h"
#include "EOSNetConnection.generated.h"

UCLASS(NonTransient, Config=OnlineSubsystemRedpointEOS)
class UEOSNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    UEOSNetConnection();
};

