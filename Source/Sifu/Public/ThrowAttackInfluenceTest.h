#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIInfluenceTest.h"
#include "ThrowAttackInfluenceTest.generated.h"

class UBaseWeaponData;
class AThrowableActor;

UCLASS()
class SIFU_API UThrowAttackInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AThrowableActor> m_ThrowableTypeToTest;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBaseWeaponData> m_WeaponDataTypeToTest;
    
public:
    UThrowAttackInfluenceTest();
};

