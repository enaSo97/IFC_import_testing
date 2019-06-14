/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcWorkScheduleTypeEnum = ENUMERATION OF	(ACTUAL	,BASELINE	,PLANNED	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcWorkScheduleTypeEnum : virtual public BuildingObject
{
public:
	enum IfcWorkScheduleTypeEnumEnum
	{
		ENUM_ACTUAL,
		ENUM_BASELINE,
		ENUM_PLANNED,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcWorkScheduleTypeEnum() = default;
	IfcWorkScheduleTypeEnum( IfcWorkScheduleTypeEnumEnum e ) { m_enum = e; }
	~IfcWorkScheduleTypeEnum() = default;
	virtual const char* className() const { return "IfcWorkScheduleTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWorkScheduleTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcWorkScheduleTypeEnumEnum m_enum;
};
