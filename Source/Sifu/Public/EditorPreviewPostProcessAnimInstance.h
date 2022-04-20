#pragma once
#include "CoreMinimal.h"
#include "PostProcessAnimInstance.h"
#include "EPostProcessAnimDebugRole.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EditorPreviewPostProcessAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class SIFU_API UEditorPreviewPostProcessAnimInstance : public UPostProcessAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_DebugIKDummySubInstanceTag;
    
    UPROPERTY(EditAnywhere)
    FName m_DebugIKMasterSubInstanceTag;
    
    UPROPERTY(BlueprintReadOnly)
    EPostProcessAnimDebugRole m_eDebugRole;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fDebugFloorHeight;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vLocationDelta;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vExpectedLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<UAnimSequence> m_DummyAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fDummyAnimTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bDummyAnimMirror;
    
    UEditorPreviewPostProcessAnimInstance();
};

