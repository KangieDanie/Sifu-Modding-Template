/********************************************************************************
The content of the files in this repository include portions of the AUDIOKINETIC
Wwise Technology released in source code form as part of the SDK package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use these files in accordance with the end user license agreement provided
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

Copyright (c) 2021 Audiokinetic Inc.
********************************************************************************/

// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PropertyEditorModule.h"
#include "IDetailCustomization.h"
//////////////////////////////////////////////////////////////////////////
// FAkSurfaceReflectorSetDetailsCustomization

class FAkSurfaceReflectorSetDetailsCustomization : public IDetailCustomization
{
public:
	FAkSurfaceReflectorSetDetailsCustomization();
	~FAkSurfaceReflectorSetDetailsCustomization();
	// Makes a new instance of this detail layout class for a specific detail view requesting it
	static TSharedRef<IDetailCustomization> MakeInstance();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
	// End of IDetailCustomization interface

private:
	IDetailLayoutBuilder* MyDetailLayout;
	class UAkSurfaceReflectorSetComponent* ReflectorSetBeingCustomized;
	void OnEnableValueChanged();
	void OnGeometryChanged();
	void SetupGeometryModificationHandlers();
};
