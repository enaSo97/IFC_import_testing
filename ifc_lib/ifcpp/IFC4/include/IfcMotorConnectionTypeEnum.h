/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcMotorConnectionTypeEnum = ENUMERATION OF	(BELTDRIVE	,COUPLING	,DIRECTDRIVE	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcMotorConnectionTypeEnum : virtual public BuildingObject
{
public:
	enum IfcMotorConnectionTypeEnumEnum
	{
		ENUM_BELTDRIVE,
		ENUM_COUPLING,
		ENUM_DIRECTDRIVE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcMotorConnectionTypeEnum() = default;
	IfcMotorConnectionTypeEnum( IfcMotorConnectionTypeEnumEnum e ) { m_enum = e; }
	~IfcMotorConnectionTypeEnum() = default;
	virtual const char* className() const { return "IfcMotorConnectionTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcMotorConnectionTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcMotorConnectionTypeEnumEnum m_enum;
};

