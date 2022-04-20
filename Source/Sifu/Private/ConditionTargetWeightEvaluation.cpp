#include "ConditionTargetWeightEvaluation.h"

FString UConditionTargetWeightEvaluation::GetEditorDesc(const FConditionOnTargetWeightEvaluation& _eval) {
    return TEXT("");
}

UConditionTargetWeightEvaluation::UConditionTargetWeightEvaluation() {
    this->m_eOperator = EWeightBinaryOperator::Add;
}

