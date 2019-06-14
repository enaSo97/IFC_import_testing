/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcArcIndex.h"
#include "ifcpp/IFC4/include/IfcLineIndex.h"
#include "ifcpp/IFC4/include/IfcSegmentIndexSelect.h"

// TYPE IfcSegmentIndexSelect = SELECT	(IfcArcIndex	,IfcLineIndex);
shared_ptr<IfcSegmentIndexSelect> IfcSegmentIndexSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.empty() ){ return shared_ptr<IfcSegmentIndexSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcSegmentIndexSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcSegmentIndexSelect>();
	}
	shared_ptr<IfcSegmentIndexSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
