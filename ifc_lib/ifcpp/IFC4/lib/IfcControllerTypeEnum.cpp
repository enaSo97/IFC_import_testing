/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcControllerTypeEnum.h"

// TYPE IfcControllerTypeEnum = ENUMERATION OF	(FLOATING	,PROGRAMMABLE	,PROPORTIONAL	,MULTIPOSITION	,TWOPOSITION	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcControllerTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcControllerTypeEnum> copy_self( new IfcControllerTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcControllerTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCONTROLLERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_FLOATING:	stream << ".FLOATING."; break;
		case ENUM_PROGRAMMABLE:	stream << ".PROGRAMMABLE."; break;
		case ENUM_PROPORTIONAL:	stream << ".PROPORTIONAL."; break;
		case ENUM_MULTIPOSITION:	stream << ".MULTIPOSITION."; break;
		case ENUM_TWOPOSITION:	stream << ".TWOPOSITION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcControllerTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_FLOATING:	return L"FLOATING";
		case ENUM_PROGRAMMABLE:	return L"PROGRAMMABLE";
		case ENUM_PROPORTIONAL:	return L"PROPORTIONAL";
		case ENUM_MULTIPOSITION:	return L"MULTIPOSITION";
		case ENUM_TWOPOSITION:	return L"TWOPOSITION";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcControllerTypeEnum> IfcControllerTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcControllerTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcControllerTypeEnum>(); }
	shared_ptr<IfcControllerTypeEnum> type_object( new IfcControllerTypeEnum() );
	if( boost::iequals( arg, L".FLOATING." ) )
	{
		type_object->m_enum = IfcControllerTypeEnum::ENUM_FLOATING;
	}
	else if( boost::iequals( arg, L".PROGRAMMABLE." ) )
	{
		type_object->m_enum = IfcControllerTypeEnum::ENUM_PROGRAMMABLE;
	}
	else if( boost::iequals( arg, L".PROPORTIONAL." ) )
	{
		type_object->m_enum = IfcControllerTypeEnum::ENUM_PROPORTIONAL;
	}
	else if( boost::iequals( arg, L".MULTIPOSITION." ) )
	{
		type_object->m_enum = IfcControllerTypeEnum::ENUM_MULTIPOSITION;
	}
	else if( boost::iequals( arg, L".TWOPOSITION." ) )
	{
		type_object->m_enum = IfcControllerTypeEnum::ENUM_TWOPOSITION;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcControllerTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcControllerTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}