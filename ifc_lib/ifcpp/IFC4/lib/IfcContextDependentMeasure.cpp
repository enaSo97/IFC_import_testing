/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcMeasureValue.h"
#include "ifcpp/IFC4/include/IfcContextDependentMeasure.h"

// TYPE IfcContextDependentMeasure = REAL;
IfcContextDependentMeasure::IfcContextDependentMeasure( double value ) { m_value = value; }
shared_ptr<BuildingObject> IfcContextDependentMeasure::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcContextDependentMeasure> copy_self( new IfcContextDependentMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcContextDependentMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCONTEXTDEPENDENTMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcContextDependentMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcContextDependentMeasure> IfcContextDependentMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcContextDependentMeasure>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcContextDependentMeasure>(); }
	shared_ptr<IfcContextDependentMeasure> type_object( new IfcContextDependentMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
