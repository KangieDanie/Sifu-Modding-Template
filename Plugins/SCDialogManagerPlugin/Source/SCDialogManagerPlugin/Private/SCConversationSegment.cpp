#include "SCConversationSegment.h"

FSCConversationSegment::FSCConversationSegment() {
    this->m_fPlaySegmentProbability = 0.00f;
    this->m_bValidOnlyInGroup = false;
    this->MinDelayAtEnd = 0.00f;
    this->MaxDelayAtEnd = 0.00f;
    this->bDontSwitchListenerAndSpeaker = false;
}

