#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "AnimSequenceDBCache.h"
#include "AnimSequenceDB.generated.h"

class UAnimSequenceEntitlementDB;
class ASCPlayerController;

UCLASS(BlueprintType)
class SIFU_API UAnimSequenceDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimSequenceEntitlementDB*> m_DBs;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_GetSequences(ASCPlayerController* _controller, UPARAM(Ref) FAnimSequenceDBCache& _outCache) const;
    
    UAnimSequenceDB();
};

