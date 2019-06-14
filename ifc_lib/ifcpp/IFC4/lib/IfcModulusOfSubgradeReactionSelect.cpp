/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcModulusOfSubgradeReactionMeasure.h"
#include "ifcpp/IFC4/include/IfcModulusOfSubgradeReactionSelect.h"

// TYPE IfcModulusOfSubgradeReactionSelect = SELECT	(IfcBoolean	,IfcModulusOfSubgradeReactionMeasure);
shared_ptr<IfcModulusOfSubgradeReactionSelect> IfcModulusOfSubgradeReactionSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.empty() ){ return shared_ptr<IfcModulusOfSubgradeReactionSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcModulusOfSubgradeReactionSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcModulusOfSubgradeReactionSelect>();
	}
	shared_ptr<IfcModulusOfSubgradeReactionSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}