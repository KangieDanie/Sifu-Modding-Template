#pragma once
#include "CoreMinimal.h"
#include "EDangerStates.h"
//CROSS-MODULE INCLUDE: SCCore SCGameState
#include "SCGameState.h"
#include "SpawnerPerZone.h"
#include "EGameModeTypes.h"
#include "ThePlainesGameState.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FThePlainesGameStateOnMatchHasStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FThePlainesGameStateOnMatchHasEnded);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FThePlainesGameStateOnLeavingMap);

UCLASS()
class SIFU_API AThePlainesGameState : public ASCGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FThePlainesGameStateOnMatchHasStarted OnMatchHasStarted;
    
    UPROPERTY(BlueprintAssignable)
    FThePlainesGameStateOnMatchHasEnded OnMatchHasEnded;
    
    UPROPERTY(BlueprintAssignable)
    FThePlainesGameStateOnLeavingMap OnLeavingMap;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 m_iNumPlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    bool m_bFriendlyFire;
    
    UPROPERTY(Replicated, Transient)
    uint8 m_uiLastHostZone;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRepNumTeam)
    int32 m_iNumTeams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTimeBeforeVanishActive;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bShouldGiveXPOnKill;
    
private:
    UPROPERTY(Replicated, Transient)
    bool m_bHasRunOnce;
    
    UPROPERTY(Replicated, Transient)
    TArray<FSpawnerPerZone> m_ToSpawnFrom;
    
    UPROPERTY(EditDefaultsOnly)
    EDangerStates m_eThresholdDangerState;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fReviveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDeathRespawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fReviveLifePercent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDeathLifePercent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRoomClearedLifePercent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVanishTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCanGoDown;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRespawnTimeNoDown;
    
public:
    UFUNCTION()
    void OnRepNumTeam();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsPvPGameMode() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetTimeBeforeVanishActive() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetRespawnTimeNoDown() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EGameModeTypes BPF_GetGameModeType() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetDownTime() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AThePlainesGameState();
};

