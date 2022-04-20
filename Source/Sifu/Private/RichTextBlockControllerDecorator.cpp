#include "RichTextBlockControllerDecorator.h"

URichTextBlockControllerDecorator::URichTextBlockControllerDecorator() : URichTextBlockDecorator(FObjectInitializer::Get()) {
    this->m_eDefaultIconStyle = EControllerIconStyles::SmallAlternative1;
    this->m_eDefaultAxisType = EControllerIconAxisTypes::HorizontalAndVertical;
    this->m_WidgetClass = NULL;
    this->m_iBaselineOffset = 0;
    this->m_MetaData = TEXT("action");
}

