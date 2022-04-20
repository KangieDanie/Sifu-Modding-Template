#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EOSGetPlayerAvatar.generated.h"

class UObject;
class UTexture;
class UEOSGetPlayerAvatar;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEOSGetPlayerAvatarOnComplete, UTexture*, Avatar);

UCLASS()
class ONLINESUBSYSTEMREDPOINTEOS_API UEOSGetPlayerAvatar : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEOSGetPlayerAvatarOnComplete OnComplete;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    int32 LocalUserNum;
    
    UPROPERTY()
    FUniqueNetIdRepl UserId;
    
    UPROPERTY()
    UTexture* DefaultAvatar;
    
public:
    UFUNCTION(BlueprintCallable)
    static UEOSGetPlayerAvatar* GetPlayerAvatar(const UObject* NewWorldContextObject, int32 NewLocalUserNum, FUniqueNetIdRepl NewUserId, UTexture* NewDefaultAvatar);
    
    UEOSGetPlayerAvatar();
};

