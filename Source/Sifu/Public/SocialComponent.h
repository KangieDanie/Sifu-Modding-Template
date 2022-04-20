#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EEmoteAction.h"
#include "ESocialRequest.h"
#include "NameArray.h"
#include "EGameModeTypes.h"
#include "ERelationshipTypes.h"
#include "InFightPlayersInfo.h"
#include "CoopGroup.h"
//CROSS-MODULE INCLUDE: Engine UniqueNetIdRepl
//CROSS-MODULE INCLUDE: Engine EEndPlayReason
#include "ECoopGameModeAnswerStatus.h"
#include "EDangerStates.h"
#include "SocialComponent.generated.h"

class UDataTable;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSocialComponentOnEquippedEmoteChanged, const FName&, _emoteName, const uint8, _uiEmoteSlotIndex);

UCLASS(BlueprintType)
class SIFU_API USocialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSocialComponentOnEquippedEmoteChanged OnEquippedEmoteChanged;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_EmoteDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fReceivedRequestTimeout;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRequestBroadcastRange;
    
    UPROPERTY(EditDefaultsOnly)
    FNameArray m_FixedEmoteWheelContent;
    
    UPROPERTY(EditDefaultsOnly)
    FNameArray m_DefaultCustomEmotesContent;
    
    UPROPERTY(EditDefaultsOnly)
    FNameArray m_FixedRequestReponseContent[5];
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_uiHitCountThresholdForWarning;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHealthPercentThresholdForWarning;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_uiHitCountThresholdForFight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHealthPercentThresholdForFight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFightDetectionTimeOut;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFightTimeOut;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFightRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCoopResolutionTimeOut;
    
    UPROPERTY(Replicated, Transient)
    TMap<TWeakObjectPtr<AActor>, ERelationshipTypes> m_Relationships;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CoopGroup)
    TArray<TWeakObjectPtr<AActor>> m_CoopGroup;
    
    UPROPERTY(Replicated, Transient)
    TArray<FInFightPlayersInfo> m_InFightPlayers;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopCoop();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReadyForCoopMatchMaking(EGameModeTypes _eGameModeType);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPrepareForCoopMatchMaking(EGameModeTypes _eGameModeType);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPerformEmoteActionWithGameMode(EEmoteAction _eEmoteAction, AActor* _targetActor, EGameModeTypes _eGameModeType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPerformEmoteAction(EEmoteAction _eEmoteAction, AActor* _targetActor);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPerformBroadcastEmoteActionWithGameMode(EEmoteAction _eEmoteAction, const TArray<AActor*>& _targetActors, EGameModeTypes _eGameModeType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPerformBroadcastEmoteAction(EEmoteAction _eEmoteAction, const TArray<AActor*>& _targetActors);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCoopPvPValidateAnswer(bool _bAccept, EGameModeTypes _eGameModeType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelRequest(ESocialRequest _eRequest);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelCoopGameMode(EGameModeTypes _eGameModeType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplyCoop(AActor* _actor);
    
private:
    UFUNCTION()
    void OnRep_CoopGroup();
    
    UFUNCTION()
    void OnCoopGroupRemoved(const FCoopGroup& _group);
    
    UFUNCTION()
    void OnCoopGroupMemberRemoved(const FUniqueNetIdRepl& _netId, AActor* _actor);
    
    UFUNCTION()
    void OnActorRelationshipEndPlayCallBack(AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _eEndPlayReason);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStopCoop();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastRemoveGroupMember(FUniqueNetIdRepl _groupMemberUniqueId, EGameModeTypes _eGameModeType);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastPrepareForCoopMatchMaking(EGameModeTypes _eGameModeType);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastCoopPvPUpdateAnswer(ECoopGameModeAnswerStatus _eAnswer, EGameModeTypes _eGameModeType);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastCoopBondResolution(AActor* _coopGroupMember, const TArray<TWeakObjectPtr<AActor>>& _coopGroup);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastChangeRelationship(AActor* _actor, ERelationshipTypes _eRelation);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastCancelRequest(ESocialRequest _eRequestType);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastCancelCoopGameMode(EGameModeTypes _eGameModeType);
    
public:
    UFUNCTION()
    void CoopDangerStateChanged(EDangerStates _ePreviousDangerState, EDangerStates _eNewDangerState);
    
private:
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientSendRequestWithGameMode(AActor* _requestInstigator, ESocialRequest _eSocialRequest, EGameModeTypes _eGameModeType);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientSendRequest(AActor* _requestInstigator, ESocialRequest _eSocialRequest);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientReadyForCoopMatchMaking(EGameModeTypes _eGameModeType);
    
public:
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientApplyCoop(AActor* _actor);
    
private:
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientAnswerRequest(AActor* _requestAnswerer, bool _bAccept);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmoteLock(bool _bLock, const FName& _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmoteAsSeen(const FName& _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetEmoteAsNew(const FName& _name);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BPF_ServerChangeRelationship(AActor* _actor, ERelationshipTypes _eRelation);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LeaveCoopGroup();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInCoopGroup() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInCoopGameMode() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsEmoteUnlocked(const FName& _name) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsEmoteNew(const FName& _name) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsEmoteEquipped(const FName& _emoteName) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasCoopGroupReturningToPvE();
    
    UFUNCTION(BlueprintCallable)
    ERelationshipTypes BPF_GetRelationship(AActor* _actor);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetNewEmotesCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetCoopPlayerCount();
    
    UFUNCTION(BlueprintPure)
    int32 BPF_CountPlayerWithAnswer(ECoopGameModeAnswerStatus _eAnswer, EGameModeTypes _eGameMode);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CancelPendingCoopMatchMaking();
    
    UFUNCTION(BlueprintCallable)
    void BPF_CancelPendingCoopGameModes(bool _bQuitTheGroup);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USocialComponent();
};

