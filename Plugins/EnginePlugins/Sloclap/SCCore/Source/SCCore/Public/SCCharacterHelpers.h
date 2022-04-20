#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SCCharacterHelpers.generated.h"

class ACharacter;

UCLASS(BlueprintType)
class SCCORE_API USCCharacterHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool BPF_TryGetRootBoneTransform(const ACharacter* _character, FTransform& _outBoneTransform, bool _bComponentSpace);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_TryGetPelvisBoneTransform(const ACharacter* _character, FTransform& _outPevlisTransform);
    
    UFUNCTION(BlueprintCallable)
    static FVector BPF_GetFloorNormal(const ACharacter* _character);
    
    USCCharacterHelpers();
};

