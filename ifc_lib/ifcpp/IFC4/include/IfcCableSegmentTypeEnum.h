/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcCableSegmentTypeEnum = ENUMERATION OF	(BUSBARSEGMENT	,CABLESEGMENT	,CONDUCTORSEGMENT	,CORESEGMENT	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcCableSegmentTypeEnum : virtual public BuildingObject
{
public:
	enum IfcCableSegmentTypeEnumEnum
	{
		ENUM_BUSBARSEGMENT,
		ENUM_CABLESEGMENT,
		ENUM_CONDUCTORSEGMENT,
		ENUM_CORESEGMENT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcCableSegmentTypeEnum() = default;
	IfcCableSegmentTypeEnum( IfcCableSegmentTypeEnumEnum e ) { m_enum = e; }
	~IfcCableSegmentTypeEnum() = default;
	virtual const char* className() const { return "IfcCableSegmentTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcCableSegmentTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcCableSegmentTypeEnumEnum m_enum;
};
