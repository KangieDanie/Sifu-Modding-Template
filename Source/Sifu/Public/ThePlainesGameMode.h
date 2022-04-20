#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SCCore SCGameMode
#include "SCGameMode.h"
#include "DamageInfos.h"
#include "EFightingState.h"
#include "ThePlainesGameMode.generated.h"

class AController;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FThePlainesGameModeOnCharacterKilled, AController*, _killer, AController*, _victim, const FDamageInfos&, _damageInfos);

UCLASS(NonTransient)
class SIFU_API AThePlainesGameMode : public ASCGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FThePlainesGameModeOnCharacterKilled OnCharacterKilled;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_ForcedPlayerStart;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float m_fGMDamageMultiplier;
    
public:
    UFUNCTION(Exec)
    void KillAllAis();
    
    UFUNCTION(BlueprintPure)
    TArray<APlayerController*> BPF_GetPlayers();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceRestartPlayerAtStartNull(AController* _controller);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_IsStartupGameMode() const;
    
    UFUNCTION(Exec)
    void AllAisSetFightingState(EFightingState _eFightingState, float _fDuration);
    
    AThePlainesGameMode();
};

