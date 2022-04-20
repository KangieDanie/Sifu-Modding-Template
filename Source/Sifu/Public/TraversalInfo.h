#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ECharacterTraversalType.h"
#include "ETraversalEntryType.h"
#include "TraversalInfo.generated.h"

class UTraversalComponent;

USTRUCT(BlueprintType)
struct FTraversalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UTraversalComponent> m_traversalComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector m_vTraversalStartPos;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector m_vTraversalEndPos;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fTraversalLength;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fTraversalHeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ETraversalEntryType m_eEntryType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ECharacterTraversalType m_eType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool m_bClimbWithFence;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, VisibleAnywhere)
    TWeakObjectPtr<UTraversalComponent> m_TraversalFenceOnTop;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    bool m_bTraversalOnStaticMesh;
    
    SIFU_API FTraversalInfo();
};

