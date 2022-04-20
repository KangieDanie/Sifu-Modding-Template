#include "OrderTypeHelper.h"

class ABaseCharacter;

FOrderType UOrderTypeHelper::MakeOrderTypeFromEnum(EOrderType _eOrderType) {
    return FOrderType{};
}

FOrderType UOrderTypeHelper::MakeOrderTypeFromBP(const ABaseCharacter* _owner, FName _OrderType) {
    return FOrderType{};
}

//FOrderType UOrderTypeHelper::MakeFromEditableOrderType(const ABaseCharacter*& _owner, const FEditableOrderType& _OrderType) {
//    return FOrderType{};
//}

UOrderTypeHelper::UOrderTypeHelper() {
}

