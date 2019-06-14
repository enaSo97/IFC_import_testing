/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <iostream>
#include <sstream>
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcShell = SELECT	(IfcClosedShell	,IfcOpenShell);
class IFCQUERY_EXPORT IfcShell : virtual public BuildingObject
{
public:
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options ) = 0;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const = 0;
	virtual const std::wstring toString() const = 0;
	static shared_ptr<IfcShell> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
};

