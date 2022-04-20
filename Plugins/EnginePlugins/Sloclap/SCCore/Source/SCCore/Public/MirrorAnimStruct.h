#pragma once
#include "CoreMinimal.h"
#include "EMirrorAnimBehavior.h"
#include "ESimpleAxis.h"
#include "EPlaneAxis.h"
#include "MirrorAnimStruct.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FMirrorAnimStruct {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString m_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_boneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMirrorAnimBehavior m_eMirrorBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_TwinBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESimpleAxis m_eMirrorRotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlaneAxis m_eMirrorTranslationPlaneAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsSocket;
    
    FMirrorAnimStruct(){};
};

