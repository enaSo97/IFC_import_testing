/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcTaskDurationEnum = ENUMERATION OF	(ELAPSEDTIME	,WORKTIME	,NOTDEFINED);
class IFCQUERY_EXPORT IfcTaskDurationEnum : virtual public BuildingObject
{
public:
	enum IfcTaskDurationEnumEnum
	{
		ENUM_ELAPSEDTIME,
		ENUM_WORKTIME,
		ENUM_NOTDEFINED
	};

	IfcTaskDurationEnum() = default;
	IfcTaskDurationEnum( IfcTaskDurationEnumEnum e ) { m_enum = e; }
	~IfcTaskDurationEnum() = default;
	virtual const char* className() const { return "IfcTaskDurationEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTaskDurationEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcTaskDurationEnumEnum m_enum;
};
