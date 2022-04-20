#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "EOSIpNetConnection.generated.h"

UCLASS(NonTransient, Config=OnlineSubsystemRedpointEOS)
class UEOSIpNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UEOSIpNetConnection();
};

