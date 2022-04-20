#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceDBCache.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "FilterProperties.h"
#include "AnimSequenceDBEntry.h"
#include "AvailabilityLayerCache.h"
#include "AvailabilityLayerCaches.h"
#include "ReplayHelperLibrary.generated.h"

class ABaseWeapon;
class ABaseReplayController;
class ASCPlayerController;

UCLASS(BlueprintType)
class SIFU_API UReplayHelperLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void BPF_SetScreenMessagesEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SaveFilterPreset(int32 _iSlot, const FFilterProperties& _inProperties, ABaseReplayController* _controller);
    
    UFUNCTION(BlueprintCallable)
    static FFilterProperties BPF_LoadFilterPreset(int32 _iSlot, bool& _bIsValid);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsAvailabilityLayerPushed(const FAvailabilityLayerCache& _inALCache);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_HasEntitlement(const ASCPlayerController* _controller, const FName& _entitlement);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetAnimSequences(UPARAM(Ref) TArray<FAnimSequenceDBEntry>& _outSequencesDB, const FAnimSequenceDBCache& _sequencesCache, const ABaseWeapon* _weapon);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_FilterPresetComparison(const FFilterProperties& _first, const FFilterProperties& _second);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_AreScreenMessagesEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_AreAvailabilityLayersPushed(const FAvailabilityLayerCaches& _inALCaches);
    
    UReplayHelperLibrary();
};

