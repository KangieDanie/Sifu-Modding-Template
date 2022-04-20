#include "AbilityTask_SlowMotionTask.h"

class UGameplayAbility;
class UCurveFloat;
class UAbilityTask_SlowMotionTask;

UAbilityTask_SlowMotionTask* UAbilityTask_SlowMotionTask::BPF_SlowMotionTask(UGameplayAbility* _owningAbility, UCurveFloat* _curve, float _fScale, float _fBlendDuration, float _fCameraSlowMotionFactor, bool _bBlockOthers, bool _bScaleInputStack) {
    return NULL;
}

UAbilityTask_SlowMotionTask::UAbilityTask_SlowMotionTask() {
    this->m_Curve = NULL;
}

