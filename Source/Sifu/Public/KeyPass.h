#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "KeyPass.generated.h"

class UInteractionObjectComponent;
class APlayerController;

UCLASS()
class SIFU_API AKeyPass : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInteractionObjectComponent* m_InteractionObjectComponent;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=On_RepCollected)
    bool m_bCollected;
    
    UPROPERTY(EditAnywhere)
    bool m_bForAllPlayers;
    
    UFUNCTION()
    void UseInteractiveObject(APlayerController* _controller);
    
    UFUNCTION()
    void On_RepCollected();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnKeyCollected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_KeyLareadyCollected();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AKeyPass();
};

