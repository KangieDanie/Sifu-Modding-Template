#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimContainer.h"
#include "ELookAtApplyMode.h"
#include "SCGestureAndBlendProfile.generated.h"

class UBlendProfilePayload;

USTRUCT(BlueprintType)
struct SCCORE_API FSCGestureAndBlendProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_GesturesAnimContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseBlendProfilePayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_GestureBlendProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBlendProfilePayload> m_BlendProfilePayload;
    
    UPROPERTY()
    bool m_bAllowSyncFidgetMirrorWithQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELookAtApplyMode m_eLookAtApplyMode;
    
    FSCGestureAndBlendProfile(){};
};

