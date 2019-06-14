/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcInternalOrExternalEnum = ENUMERATION OF	(INTERNAL	,EXTERNAL	,EXTERNAL_EARTH	,EXTERNAL_WATER	,EXTERNAL_FIRE	,NOTDEFINED);
class IFCQUERY_EXPORT IfcInternalOrExternalEnum : virtual public BuildingObject
{
public:
	enum IfcInternalOrExternalEnumEnum
	{
		ENUM_INTERNAL,
		ENUM_EXTERNAL,
		ENUM_EXTERNAL_EARTH,
		ENUM_EXTERNAL_WATER,
		ENUM_EXTERNAL_FIRE,
		ENUM_NOTDEFINED
	};

	IfcInternalOrExternalEnum() = default;
	IfcInternalOrExternalEnum( IfcInternalOrExternalEnumEnum e ) { m_enum = e; }
	~IfcInternalOrExternalEnum() = default;
	virtual const char* className() const { return "IfcInternalOrExternalEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcInternalOrExternalEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcInternalOrExternalEnumEnum m_enum;
};

