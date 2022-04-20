#include "CharacterStatAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UCharacterStatAttributeSet::OnRep_DeathCounter() {
}

void UCharacterStatAttributeSet::OnRep_Age() {
}

void UCharacterStatAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    /*DOREPLIFETIME(UCharacterStatAttributeSet, Age);
    DOREPLIFETIME(UCharacterStatAttributeSet, DeathCounter);*/
}

UCharacterStatAttributeSet::UCharacterStatAttributeSet() {
}

