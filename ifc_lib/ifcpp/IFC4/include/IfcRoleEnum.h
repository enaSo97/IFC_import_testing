/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcRoleEnum = ENUMERATION OF	(SUPPLIER	,MANUFACTURER	,CONTRACTOR	,SUBCONTRACTOR	,ARCHITECT	,STRUCTURALENGINEER	,COSTENGINEER	,CLIENT	,BUILDINGOWNER	,BUILDINGOPERATOR	,MECHANICALENGINEER	,ELECTRICALENGINEER	,PROJECTMANAGER	,FACILITIESMANAGER	,CIVILENGINEER	,COMMISSIONINGENGINEER	,ENGINEER	,OWNER	,CONSULTANT	,CONSTRUCTIONMANAGER	,FIELDCONSTRUCTIONMANAGER	,RESELLER	,USERDEFINED);
class IFCQUERY_EXPORT IfcRoleEnum : virtual public BuildingObject
{
public:
	enum IfcRoleEnumEnum
	{
		ENUM_SUPPLIER,
		ENUM_MANUFACTURER,
		ENUM_CONTRACTOR,
		ENUM_SUBCONTRACTOR,
		ENUM_ARCHITECT,
		ENUM_STRUCTURALENGINEER,
		ENUM_COSTENGINEER,
		ENUM_CLIENT,
		ENUM_BUILDINGOWNER,
		ENUM_BUILDINGOPERATOR,
		ENUM_MECHANICALENGINEER,
		ENUM_ELECTRICALENGINEER,
		ENUM_PROJECTMANAGER,
		ENUM_FACILITIESMANAGER,
		ENUM_CIVILENGINEER,
		ENUM_COMMISSIONINGENGINEER,
		ENUM_ENGINEER,
		ENUM_OWNER,
		ENUM_CONSULTANT,
		ENUM_CONSTRUCTIONMANAGER,
		ENUM_FIELDCONSTRUCTIONMANAGER,
		ENUM_RESELLER,
		ENUM_USERDEFINED
	};

	IfcRoleEnum() = default;
	IfcRoleEnum( IfcRoleEnumEnum e ) { m_enum = e; }
	~IfcRoleEnum() = default;
	virtual const char* className() const { return "IfcRoleEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcRoleEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcRoleEnumEnum m_enum;
};
