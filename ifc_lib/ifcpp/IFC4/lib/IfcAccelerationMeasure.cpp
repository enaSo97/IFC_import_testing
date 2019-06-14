/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcAccelerationMeasure.h"

// TYPE IfcAccelerationMeasure = REAL;
IfcAccelerationMeasure::IfcAccelerationMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcAccelerationMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAccelerationMeasure> copy_self( new IfcAccelerationMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcAccelerationMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCACCELERATIONMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcAccelerationMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcAccelerationMeasure> IfcAccelerationMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcAccelerationMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcAccelerationMeasure>(); }
	shared_ptr<IfcAccelerationMeasure> type_object( new IfcAccelerationMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
