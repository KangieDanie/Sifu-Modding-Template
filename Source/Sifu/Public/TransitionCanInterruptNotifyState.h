#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyState.h"
//CROSS-MODULE INCLUDE: SCCore Bool
#include "Bool.h"
#include "TransitionCanInterruptNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UTransitionCanInterruptNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBool m_TransitionAllowance[86];
    
    UPROPERTY(EditAnywhere)
    FName m_BaseName;
    
protected:
    UFUNCTION()
    void InvertUTurn() const;
    
    UFUNCTION()
    void InvertTurnInPlace() const;
    
    UFUNCTION()
    void InvertStrafe() const;
    
    UFUNCTION()
    void InvertStop() const;
    
    UFUNCTION()
    void InvertStart() const;
    
    UFUNCTION()
    void InvertAll() const;
    
    UFUNCTION()
    void AllowNone() const;
    
    UFUNCTION()
    void AllowAll() const;
    
public:
    UTransitionCanInterruptNotifyState();
};

