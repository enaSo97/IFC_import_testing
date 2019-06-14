/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcLayerSetDirectionEnum.h"

// TYPE IfcLayerSetDirectionEnum = ENUMERATION OF	(AXIS1	,AXIS2	,AXIS3);
shared_ptr<BuildingObject> IfcLayerSetDirectionEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcLayerSetDirectionEnum> copy_self( new IfcLayerSetDirectionEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcLayerSetDirectionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLAYERSETDIRECTIONENUM("; }
	switch( m_enum )
	{
		case ENUM_AXIS1:	stream << ".AXIS1."; break;
		case ENUM_AXIS2:	stream << ".AXIS2."; break;
		case ENUM_AXIS3:	stream << ".AXIS3."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLayerSetDirectionEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_AXIS1:	return L"AXIS1";
		case ENUM_AXIS2:	return L"AXIS2";
		case ENUM_AXIS3:	return L"AXIS3";
	}
	return L"";
}
shared_ptr<IfcLayerSetDirectionEnum> IfcLayerSetDirectionEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLayerSetDirectionEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLayerSetDirectionEnum>(); }
	shared_ptr<IfcLayerSetDirectionEnum> type_object( new IfcLayerSetDirectionEnum() );
	if( boost::iequals( arg, L".AXIS1." ) )
	{
		type_object->m_enum = IfcLayerSetDirectionEnum::ENUM_AXIS1;
	}
	else if( boost::iequals( arg, L".AXIS2." ) )
	{
		type_object->m_enum = IfcLayerSetDirectionEnum::ENUM_AXIS2;
	}
	else if( boost::iequals( arg, L".AXIS3." ) )
	{
		type_object->m_enum = IfcLayerSetDirectionEnum::ENUM_AXIS3;
	}
	return type_object;
}
