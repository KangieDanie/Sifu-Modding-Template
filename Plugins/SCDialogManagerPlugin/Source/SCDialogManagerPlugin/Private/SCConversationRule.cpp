#include "SCConversationRule.h"

FSCConversationRule::FSCConversationRule() {
    this->bIntendedResult = false;
    this->bCheckGameplayTag = false;
    this->Operation = EOperationType::Equal;
}

