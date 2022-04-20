#pragma once
#include "CoreMinimal.h"
#include "FilterPresetCache.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "FilterPresetDB.generated.h"

class UFilterPresetEntitlementDB;
class ASCPlayerController;

UCLASS(BlueprintType)
class SIFU_API UFilterPresetDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UFilterPresetEntitlementDB*> m_DBs;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_GetFilters(ASCPlayerController* _controller, UPARAM(Ref) FFilterPresetCache& _outCache) const;
    
    UFilterPresetDB();
};

