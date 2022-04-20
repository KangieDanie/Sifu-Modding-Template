#include "AttachWeapon_Notify.h"

UAttachWeapon_Notify::UAttachWeapon_Notify() {
    this->m_bFakie = false;
    this->m_bIsEndReattachment = false;
    this->m_bAttachInFakieIfCancelledFromThisNotify = false;
}

