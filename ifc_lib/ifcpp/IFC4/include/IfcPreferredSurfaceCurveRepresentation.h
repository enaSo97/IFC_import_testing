/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcPreferredSurfaceCurveRepresentation = ENUMERATION OF	(CURVE3D	,PCURVE_S1	,PCURVE_S2);
class IFCQUERY_EXPORT IfcPreferredSurfaceCurveRepresentation : virtual public BuildingObject
{
public:
	enum IfcPreferredSurfaceCurveRepresentationEnum
	{
		ENUM_CURVE3D,
		ENUM_PCURVE_S1,
		ENUM_PCURVE_S2
	};

	IfcPreferredSurfaceCurveRepresentation() = default;
	IfcPreferredSurfaceCurveRepresentation( IfcPreferredSurfaceCurveRepresentationEnum e ) { m_enum = e; }
	~IfcPreferredSurfaceCurveRepresentation() = default;
	virtual const char* className() const { return "IfcPreferredSurfaceCurveRepresentation"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcPreferredSurfaceCurveRepresentation> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcPreferredSurfaceCurveRepresentationEnum m_enum;
};
