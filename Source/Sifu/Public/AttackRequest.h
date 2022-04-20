#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "EQuadrantTypes.h"
#include "AttackRequest.generated.h"

class UCombo;
class UAttackDB;

USTRUCT(BlueprintType)
struct FAttackRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    InputAction m_eInputAction;
    
    UPROPERTY(BlueprintReadOnly)
    EQuadrantTypes m_eCurrentQuadrant;
    
    UPROPERTY(BlueprintReadWrite)
    FName m_AttackName;
    
    UPROPERTY(BlueprintReadOnly)
    FName m_ComboState;
    
    UPROPERTY(BlueprintReadOnly)
    UCombo* m_Combo;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iComboNodeID;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fStartRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAttackDB* m_AttackDB;
    
    SIFU_API FAttackRequest();
};

