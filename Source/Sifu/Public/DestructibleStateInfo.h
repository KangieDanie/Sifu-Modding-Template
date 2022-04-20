#pragma once
#include "CoreMinimal.h"
#include "DestructibleStateInfo.generated.h"

class UStaticMesh;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FDestructibleStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 m_iHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UStaticMesh* m_StateStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    USkeletalMesh* m_StateSkeletalMesh;
    
    SIFU_API FDestructibleStateInfo();
};

