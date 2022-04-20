#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/CollisionProfile.h"
#include "SCEnvQueryTest.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Engine/EngineTypes.h"
#include "DataProviders/AIDataProvider.h"
#include "SCEnvQueryTest_Trace.generated.h"

class UEnvQueryContext;

UCLASS()
class SCCORE_API USCEnvQueryTest_Trace : public USCEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvTraceData m_TraceData;
    
    UPROPERTY(EditAnywhere)
    bool m_bCustomCollisionResponse;
    
    UPROPERTY(EditAnywhere)
    FCollisionProfileName m_CollisionProfile;
    
    UPROPERTY(EditDefaultsOnly)
    FCollisionResponseContainer m_CollisionSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_FromContext;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_ToContext;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue m_FromZOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue m_ToZOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIgnoreQuerier;
    
    USCEnvQueryTest_Trace();
};

