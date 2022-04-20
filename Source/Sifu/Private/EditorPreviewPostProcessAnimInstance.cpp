#include "EditorPreviewPostProcessAnimInstance.h"

UEditorPreviewPostProcessAnimInstance::UEditorPreviewPostProcessAnimInstance() {
    this->m_DebugIKDummySubInstanceTag = TEXT("DebugIKDummy");
    this->m_DebugIKMasterSubInstanceTag = TEXT("DebugIKMaster");
    this->m_eDebugRole = EPostProcessAnimDebugRole::None;
    this->m_fDebugFloorHeight = 0.00f;
    this->m_fDummyAnimTime = 0.00f;
    this->m_bDummyAnimMirror = false;
}

