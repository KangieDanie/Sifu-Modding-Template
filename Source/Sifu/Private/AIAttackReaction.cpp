#include "AIAttackReaction.h"

FAIAttackReaction::FAIAttackReaction() {
    this->m_bCanInterruptMoveToAttack = false;
    this->m_bCanInterruptAttackWhenAvailable = false;
    this->m_bCanEndComboAfterOnGoingAttack = false;
    this->m_bCanInterruptPassiveTicket = false;
}

