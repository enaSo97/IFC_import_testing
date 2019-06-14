/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcDoorPanelOperationEnum = ENUMERATION OF	(SWINGING	,DOUBLE_ACTING	,SLIDING	,FOLDING	,REVOLVING	,ROLLINGUP	,FIXEDPANEL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcDoorPanelOperationEnum : virtual public BuildingObject
{
public:
	enum IfcDoorPanelOperationEnumEnum
	{
		ENUM_SWINGING,
		ENUM_DOUBLE_ACTING,
		ENUM_SLIDING,
		ENUM_FOLDING,
		ENUM_REVOLVING,
		ENUM_ROLLINGUP,
		ENUM_FIXEDPANEL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcDoorPanelOperationEnum() = default;
	IfcDoorPanelOperationEnum( IfcDoorPanelOperationEnumEnum e ) { m_enum = e; }
	~IfcDoorPanelOperationEnum() = default;
	virtual const char* className() const { return "IfcDoorPanelOperationEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcDoorPanelOperationEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcDoorPanelOperationEnumEnum m_enum;
};

