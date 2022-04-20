#include "SCUserDefinedEnumHandlerHelper.h"

class UEnum;

void USCUserDefinedEnumHandlerHelper::BPF_SetEnumValue(FSCUserDefinedEnumHandler& _enum, uint8 _uiEnumValue) {
}

uint8 USCUserDefinedEnumHandlerHelper::BPF_GetEnumValue(const FSCUserDefinedEnumHandler& _enum, const UEnum* _enumObject) {
    return 0;
}

FName USCUserDefinedEnumHandlerHelper::BPF_GetEnumNameValue(const FSCUserDefinedEnumHandler& _enum) {
    return NAME_None;
}

FText USCUserDefinedEnumHandlerHelper::BPF_GetEnumDisplayName(const FSCUserDefinedEnumHandler& _enum) {
    return FText::GetEmpty();
}

bool USCUserDefinedEnumHandlerHelper::BPF_Equal(const FSCUserDefinedEnumHandler& _enum1, const FSCUserDefinedEnumHandler& _enum2) {
    return false;
}

FSCUserDefinedEnumHandler USCUserDefinedEnumHandlerHelper::BPF_ConvertEnumToSCUserEnum(UEnum* _enum, uint8 _value) {
    return FSCUserDefinedEnumHandler{};
}

USCUserDefinedEnumHandlerHelper::USCUserDefinedEnumHandlerHelper() {
}

