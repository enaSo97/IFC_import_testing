/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcProcedureTypeEnum.h"

// TYPE IfcProcedureTypeEnum = ENUMERATION OF	(ADVICE_CAUTION	,ADVICE_NOTE	,ADVICE_WARNING	,CALIBRATION	,DIAGNOSTIC	,SHUTDOWN	,STARTUP	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcProcedureTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcProcedureTypeEnum> copy_self( new IfcProcedureTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcProcedureTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPROCEDURETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ADVICE_CAUTION:	stream << ".ADVICE_CAUTION."; break;
		case ENUM_ADVICE_NOTE:	stream << ".ADVICE_NOTE."; break;
		case ENUM_ADVICE_WARNING:	stream << ".ADVICE_WARNING."; break;
		case ENUM_CALIBRATION:	stream << ".CALIBRATION."; break;
		case ENUM_DIAGNOSTIC:	stream << ".DIAGNOSTIC."; break;
		case ENUM_SHUTDOWN:	stream << ".SHUTDOWN."; break;
		case ENUM_STARTUP:	stream << ".STARTUP."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcProcedureTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ADVICE_CAUTION:	return L"ADVICE_CAUTION";
		case ENUM_ADVICE_NOTE:	return L"ADVICE_NOTE";
		case ENUM_ADVICE_WARNING:	return L"ADVICE_WARNING";
		case ENUM_CALIBRATION:	return L"CALIBRATION";
		case ENUM_DIAGNOSTIC:	return L"DIAGNOSTIC";
		case ENUM_SHUTDOWN:	return L"SHUTDOWN";
		case ENUM_STARTUP:	return L"STARTUP";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcProcedureTypeEnum> IfcProcedureTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcProcedureTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcProcedureTypeEnum>(); }
	shared_ptr<IfcProcedureTypeEnum> type_object( new IfcProcedureTypeEnum() );
	if( boost::iequals( arg, L".ADVICE_CAUTION." ) )
	{
		type_object->m_enum = IfcProcedureTypeEnum::ENUM_ADVICE_CAUTION;
	}
	else if( boost::iequals( arg, L".ADVICE_NOTE." ) )
	{
		type_object->m_enum = IfcProcedureTypeEnum::ENUM_ADVICE_NOTE;
	}
	else if( boost::iequals( arg, L".ADVICE_WARNING." ) )
	{
		type_object->m_enum = IfcProcedureTypeEnum::ENUM_ADVICE_WARNING;
	}
	else if( boost::iequals( arg, L".CALIBRATION." ) )
	{
		type_object->m_enum = IfcProcedureTypeEnum::ENUM_CALIBRATION;
	}
	else if( boost::iequals( arg, L".DIAGNOSTIC." ) )
	{
		type_object->m_enum = IfcProcedureTypeEnum::ENUM_DIAGNOSTIC;
	}
	else if( boost::iequals( arg, L".SHUTDOWN." ) )
	{
		type_object->m_enum = IfcProcedureTypeEnum::ENUM_SHUTDOWN;
	}
	else if( boost::iequals( arg, L".STARTUP." ) )
	{
		type_object->m_enum = IfcProcedureTypeEnum::ENUM_STARTUP;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcProcedureTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcProcedureTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
