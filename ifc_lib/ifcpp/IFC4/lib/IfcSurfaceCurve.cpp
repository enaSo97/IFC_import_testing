/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcPcurve.h"
#include "ifcpp/IFC4/include/IfcPreferredSurfaceCurveRepresentation.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSurfaceCurve.h"

// ENTITY IfcSurfaceCurve 
IfcSurfaceCurve::IfcSurfaceCurve( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcSurfaceCurve::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSurfaceCurve> copy_self( new IfcSurfaceCurve() );
	if( m_Curve3D ) { copy_self->m_Curve3D = dynamic_pointer_cast<IfcCurve>( m_Curve3D->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_AssociatedGeometry.size(); ++ii )
	{
		auto item_ii = m_AssociatedGeometry[ii];
		if( item_ii )
		{
			copy_self->m_AssociatedGeometry.emplace_back( dynamic_pointer_cast<IfcPcurve>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_MasterRepresentation ) { copy_self->m_MasterRepresentation = dynamic_pointer_cast<IfcPreferredSurfaceCurveRepresentation>( m_MasterRepresentation->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSurfaceCurve::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSURFACECURVE" << "(";
	if( m_Curve3D ) { stream << "#" << m_Curve3D->m_entity_id; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_AssociatedGeometry );
	stream << ",";
	if( m_MasterRepresentation ) { m_MasterRepresentation->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSurfaceCurve::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSurfaceCurve::toString() const { return L"IfcSurfaceCurve"; }
void IfcSurfaceCurve::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSurfaceCurve, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Curve3D, map );
	readEntityReferenceList( args[1], m_AssociatedGeometry, map );
	m_MasterRepresentation = IfcPreferredSurfaceCurveRepresentation::createObjectFromSTEP( args[2], map );
}
void IfcSurfaceCurve::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcCurve::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Curve3D", m_Curve3D ) );
	if( !m_AssociatedGeometry.empty() )
	{
		shared_ptr<AttributeObjectVector> AssociatedGeometry_vec_object( new AttributeObjectVector() );
		std::copy( m_AssociatedGeometry.begin(), m_AssociatedGeometry.end(), std::back_inserter( AssociatedGeometry_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "AssociatedGeometry", AssociatedGeometry_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "MasterRepresentation", m_MasterRepresentation ) );
}
void IfcSurfaceCurve::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcCurve::getAttributesInverse( vec_attributes_inverse );
}
void IfcSurfaceCurve::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCurve::setInverseCounterparts( ptr_self_entity );
}
void IfcSurfaceCurve::unlinkFromInverseCounterparts()
{
	IfcCurve::unlinkFromInverseCounterparts();
}