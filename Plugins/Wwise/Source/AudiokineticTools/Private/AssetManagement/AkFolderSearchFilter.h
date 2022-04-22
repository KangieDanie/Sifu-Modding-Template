// Copyright Audiokinetic Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "FrontendFilterBase.h"
#include "ContentBrowserFrontEndFilterExtension.h"

#include "AkFolderSearchFilter.generated.h"

UCLASS()
class UAkFolderSearchFilter : public UContentBrowserFrontEndFilterExtension
{
public:
	GENERATED_BODY()

	virtual void AddFrontEndFilterExtensions(TSharedPtr<class FFrontendFilterCategory> DefaultCategory, TArray< TSharedRef<class FFrontendFilter> >& InOutFilterList) const override;
};
