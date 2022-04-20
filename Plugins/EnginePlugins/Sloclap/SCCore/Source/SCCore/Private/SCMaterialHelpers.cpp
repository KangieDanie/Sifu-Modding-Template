#include "SCMaterialHelpers.h"

class UObject;
class ACharacter;
class UMaterialParameterCollection;
class UMeshComponent;
class UCurveBase;

void USCMaterialHelpers::BPF_SetMPCVectorParameterValue(const UObject* _worldContext, UMaterialParameterCollection* _collection, FName _parameter, FVector _vValue) {
}

void USCMaterialHelpers::BPF_SetMPCScalarParameterValue(const UObject* _worldContext, UMaterialParameterCollection* _collection, FName _parameter, float _fValue) {
}

void USCMaterialHelpers::BPF_DeleteParameterBinding(int32 _iHandle) {
}

void USCMaterialHelpers::BPF_BlendMaterialParameterLinearVectorFinishable(UMeshComponent* _owner, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration, FSCMaterialHelpersOnFinished _onFinished, int32 _iMaterialIndex) {
}

void USCMaterialHelpers::BPF_BlendMaterialParameterLinearVector(UMeshComponent* _owner, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration, int32 _iMaterialIndex) {
}

void USCMaterialHelpers::BPF_BlendMaterialParameterLinearFloatFinishable(UMeshComponent* _owner, FName _name, float _fFromValue, float _fToValue, float _fDuration, FSCMaterialHelpersOnFinished _onFinished, int32 _iMaterialIndex) {
}

void USCMaterialHelpers::BPF_BlendMaterialParameterLinearFloat(UMeshComponent* _owner, FName _name, float _fFromValue, float _fToValue, float _fDuration, int32 _iMaterialIndex) {
}

void USCMaterialHelpers::BPF_BlendMaterialParameterLinearColorFinishable(UMeshComponent* _owner, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration, FSCMaterialHelpersOnFinished _onFinished, int32 _iMaterialIndex) {
}

void USCMaterialHelpers::BPF_BlendMaterialParameterLinearColor(UMeshComponent* _owner, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration, int32 _iMaterialIndex) {
}

void USCMaterialHelpers::BPF_BlendMaterialParameterCurveFinishable(UMeshComponent* _owner, FName _name, const UCurveBase* _curve, FSCMaterialHelpersOnFinished _onFinished, int32 _iMaterialIndex) {
}

void USCMaterialHelpers::BPF_BlendMaterialParameterCurve(UMeshComponent* _owner, FName _name, const UCurveBase* _curve, int32 _iMaterialIndex) {
}

void USCMaterialHelpers::BPF_Blend_MPC_ParameterLinearVectorFinishable(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration, FSCMaterialHelpersOnFinished _onFinished) {
}

void USCMaterialHelpers::BPF_Blend_MPC_ParameterLinearVector(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration) {
}

void USCMaterialHelpers::BPF_Blend_MPC_ParameterLinearFloatFinishable(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, float _fFromValue, float _fToValue, float _fDuration, FSCMaterialHelpersOnFinished _onFinished) {
}

void USCMaterialHelpers::BPF_Blend_MPC_ParameterLinearFloat(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, float _fFromValue, float _fToValue, float _fDuration) {
}

void USCMaterialHelpers::BPF_Blend_MPC_ParameterLinearColorFinishable(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration, FSCMaterialHelpersOnFinished _onFinished) {
}

void USCMaterialHelpers::BPF_Blend_MPC_ParameterLinearColor(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration) {
}

void USCMaterialHelpers::BPF_Blend_MPC_ParameterCurveFinishable(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const UCurveBase* _curve, FSCMaterialHelpersOnFinished _onFinished) {
}

void USCMaterialHelpers::BPF_Blend_MPC_ParameterCurve(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const UCurveBase* _curve) {
}

int32 USCMaterialHelpers::BPF_BindMPCParamToCharacterSocketLocation(ACharacter* _character, FName _socketName, UMaterialParameterCollection* _collection, FName _parameterName) {
    return 0;
}

USCMaterialHelpers::USCMaterialHelpers() {
}

