#pragma once
#include "WwiseItemType.h"
#include "FastXml.h"

class WorkUnitXmlVisitor;

class WwiseProjectParser : public IFastXmlCallback
{
public:
	WwiseProjectParser(WorkUnitXmlVisitor* vis);
	virtual ~WwiseProjectParser() {};

private:
	FString currentPhysicalPath;
	FString workUnitName;
	FGuid currentId;
	bool inPhysicalFolder;
	bool inWorkUnit;
	WorkUnitXmlVisitor* visitor;

	bool ProcessXmlDeclaration(const TCHAR* ElementData, int32 XmlFileLineNumber) override;

	bool ProcessElement(const TCHAR* ElementName, const TCHAR* ElementData, int32 XmlFileLineNumber) override;

	bool ProcessAttribute(const TCHAR* AttributeName, const TCHAR* AttributeValue) override;

	bool ProcessClose(const TCHAR* ElementName) override;

	bool ProcessComment(const TCHAR* Comment) override;
};