/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcWallTypeEnum = ENUMERATION OF	(MOVABLE	,PARAPET	,PARTITIONING	,PLUMBINGWALL	,SHEAR	,SOLIDWALL	,STANDARD	,POLYGONAL	,ELEMENTEDWALL	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcWallTypeEnum : virtual public BuildingObject
{
public:
	enum IfcWallTypeEnumEnum
	{
		ENUM_MOVABLE,
		ENUM_PARAPET,
		ENUM_PARTITIONING,
		ENUM_PLUMBINGWALL,
		ENUM_SHEAR,
		ENUM_SOLIDWALL,
		ENUM_STANDARD,
		ENUM_POLYGONAL,
		ENUM_ELEMENTEDWALL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcWallTypeEnum() = default;
	IfcWallTypeEnum( IfcWallTypeEnumEnum e ) { m_enum = e; }
	~IfcWallTypeEnum() = default;
	virtual const char* className() const { return "IfcWallTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWallTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcWallTypeEnumEnum m_enum;
};

