/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcThermalAdmittanceMeasure.h"

// TYPE IfcThermalAdmittanceMeasure = REAL;
IfcThermalAdmittanceMeasure::IfcThermalAdmittanceMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcThermalAdmittanceMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcThermalAdmittanceMeasure> copy_self( new IfcThermalAdmittanceMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcThermalAdmittanceMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTHERMALADMITTANCEMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcThermalAdmittanceMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcThermalAdmittanceMeasure> IfcThermalAdmittanceMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcThermalAdmittanceMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcThermalAdmittanceMeasure>(); }
	shared_ptr<IfcThermalAdmittanceMeasure> type_object( new IfcThermalAdmittanceMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
