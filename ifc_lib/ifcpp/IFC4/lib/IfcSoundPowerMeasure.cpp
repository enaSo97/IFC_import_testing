/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcSoundPowerMeasure.h"

// TYPE IfcSoundPowerMeasure = REAL;
IfcSoundPowerMeasure::IfcSoundPowerMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcSoundPowerMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSoundPowerMeasure> copy_self( new IfcSoundPowerMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcSoundPowerMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSOUNDPOWERMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcSoundPowerMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcSoundPowerMeasure> IfcSoundPowerMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcSoundPowerMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcSoundPowerMeasure>(); }
	shared_ptr<IfcSoundPowerMeasure> type_object( new IfcSoundPowerMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
