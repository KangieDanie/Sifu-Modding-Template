#pragma once
#include "CoreMinimal.h"
#include "MirrorAnimStruct.h"
#include "Engine/DataAsset.h"
#include "MirrorAnimDB.generated.h"

class USkeleton;

UCLASS(BlueprintType)
class SCCORE_API UMirrorAnimDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FMirrorAnimStruct> m_MirrorAnimStruct;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FMirrorAnimStruct> m_MirrorAnimStructMap;
    
    UPROPERTY(EditDefaultsOnly)
    USkeleton* m_UberSkeleton;
    
    UFUNCTION(BlueprintCallable)
    FName BPF_GetTwinsBoneName(const FName& _boneName);
    
    UMirrorAnimDB();
};

