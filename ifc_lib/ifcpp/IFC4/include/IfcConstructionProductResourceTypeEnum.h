/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcConstructionProductResourceTypeEnum = ENUMERATION OF	(ASSEMBLY	,FORMWORK	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcConstructionProductResourceTypeEnum : virtual public BuildingObject
{
public:
	enum IfcConstructionProductResourceTypeEnumEnum
	{
		ENUM_ASSEMBLY,
		ENUM_FORMWORK,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcConstructionProductResourceTypeEnum() = default;
	IfcConstructionProductResourceTypeEnum( IfcConstructionProductResourceTypeEnumEnum e ) { m_enum = e; }
	~IfcConstructionProductResourceTypeEnum() = default;
	virtual const char* className() const { return "IfcConstructionProductResourceTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcConstructionProductResourceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcConstructionProductResourceTypeEnumEnum m_enum;
};

