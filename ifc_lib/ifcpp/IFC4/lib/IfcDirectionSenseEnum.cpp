/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDirectionSenseEnum.h"

// TYPE IfcDirectionSenseEnum = ENUMERATION OF	(POSITIVE	,NEGATIVE);
shared_ptr<BuildingObject> IfcDirectionSenseEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDirectionSenseEnum> copy_self( new IfcDirectionSenseEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDirectionSenseEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDIRECTIONSENSEENUM("; }
	switch( m_enum )
	{
		case ENUM_POSITIVE:	stream << ".POSITIVE."; break;
		case ENUM_NEGATIVE:	stream << ".NEGATIVE."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDirectionSenseEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_POSITIVE:	return L"POSITIVE";
		case ENUM_NEGATIVE:	return L"NEGATIVE";
	}
	return L"";
}
shared_ptr<IfcDirectionSenseEnum> IfcDirectionSenseEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDirectionSenseEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDirectionSenseEnum>(); }
	shared_ptr<IfcDirectionSenseEnum> type_object( new IfcDirectionSenseEnum() );
	if( boost::iequals( arg, L".POSITIVE." ) )
	{
		type_object->m_enum = IfcDirectionSenseEnum::ENUM_POSITIVE;
	}
	else if( boost::iequals( arg, L".NEGATIVE." ) )
	{
		type_object->m_enum = IfcDirectionSenseEnum::ENUM_NEGATIVE;
	}
	return type_object;
}
