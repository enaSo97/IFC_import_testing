/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcChangeActionEnum.h"

// TYPE IfcChangeActionEnum = ENUMERATION OF	(NOCHANGE	,MODIFIED	,ADDED	,DELETED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcChangeActionEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcChangeActionEnum> copy_self( new IfcChangeActionEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcChangeActionEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCHANGEACTIONENUM("; }
	switch( m_enum )
	{
		case ENUM_NOCHANGE:	stream << ".NOCHANGE."; break;
		case ENUM_MODIFIED:	stream << ".MODIFIED."; break;
		case ENUM_ADDED:	stream << ".ADDED."; break;
		case ENUM_DELETED:	stream << ".DELETED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcChangeActionEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_NOCHANGE:	return L"NOCHANGE";
		case ENUM_MODIFIED:	return L"MODIFIED";
		case ENUM_ADDED:	return L"ADDED";
		case ENUM_DELETED:	return L"DELETED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcChangeActionEnum> IfcChangeActionEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcChangeActionEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcChangeActionEnum>(); }
	shared_ptr<IfcChangeActionEnum> type_object( new IfcChangeActionEnum() );
	if( boost::iequals( arg, L".NOCHANGE." ) )
	{
		type_object->m_enum = IfcChangeActionEnum::ENUM_NOCHANGE;
	}
	else if( boost::iequals( arg, L".MODIFIED." ) )
	{
		type_object->m_enum = IfcChangeActionEnum::ENUM_MODIFIED;
	}
	else if( boost::iequals( arg, L".ADDED." ) )
	{
		type_object->m_enum = IfcChangeActionEnum::ENUM_ADDED;
	}
	else if( boost::iequals( arg, L".DELETED." ) )
	{
		type_object->m_enum = IfcChangeActionEnum::ENUM_DELETED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcChangeActionEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
