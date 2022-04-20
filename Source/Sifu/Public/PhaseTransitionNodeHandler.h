#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EAIPhaseLevelSequenceTransform.h"
//CROSS-MODULE INCLUDE: SCCore AnimContainer
#include "AnimContainer.h"
#include "AISituationNamedActor.h"
#include "PhaseTransitionNodeHandler.generated.h"

class UAIPhaseTransition;
class USynchronizedAttackHitActionLauncher;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FPhaseTransitionNodeHandler {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UAIPhaseTransition* m_TransitionObject;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bNeedsLastManGaugeFull;
    
    UPROPERTY(VisibleAnywhere)
    FAnimContainer m_PhaseTransitionAnimContainer;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<USynchronizedAttackHitActionLauncher> m_SyncHitActionLauncher;
    
    UPROPERTY(VisibleAnywhere)
    ULevelSequence* m_LevelSequence;
    
    UPROPERTY(VisibleAnywhere)
    EAIPhaseLevelSequenceTransform m_LevelSequenceTransform;
    
    UPROPERTY(VisibleAnywhere)
    FAISituationNamedActor m_LevelSequenceTransformActor;
    
    UPROPERTY(VisibleAnywhere)
    int32 m_iChildNodeIndex;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bResetHealth;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bResetStructure;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bResetSuperDizzy;
    
    UPROPERTY(VisibleAnywhere)
    bool m_bResetCurrentAIActions;
    
    SIFU_API FPhaseTransitionNodeHandler();
};

