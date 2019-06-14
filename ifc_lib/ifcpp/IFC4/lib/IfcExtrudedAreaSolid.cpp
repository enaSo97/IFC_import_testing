/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4/include/IfcDirection.h"
#include "ifcpp/IFC4/include/IfcExtrudedAreaSolid.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcProfileDef.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcExtrudedAreaSolid 
IfcExtrudedAreaSolid::IfcExtrudedAreaSolid( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcExtrudedAreaSolid::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcExtrudedAreaSolid> copy_self( new IfcExtrudedAreaSolid() );
	if( m_SweptArea )
	{
		if( options.shallow_copy_IfcProfileDef ) { copy_self->m_SweptArea = m_SweptArea; }
		else { copy_self->m_SweptArea = dynamic_pointer_cast<IfcProfileDef>( m_SweptArea->getDeepCopy(options) ); }
	}
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement3D>( m_Position->getDeepCopy(options) ); }
	if( m_ExtrudedDirection ) { copy_self->m_ExtrudedDirection = dynamic_pointer_cast<IfcDirection>( m_ExtrudedDirection->getDeepCopy(options) ); }
	if( m_Depth ) { copy_self->m_Depth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_Depth->getDeepCopy(options) ); }
	return copy_self;
}
void IfcExtrudedAreaSolid::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCEXTRUDEDAREASOLID" << "(";
	if( m_SweptArea ) { stream << "#" << m_SweptArea->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_ExtrudedDirection ) { stream << "#" << m_ExtrudedDirection->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Depth ) { m_Depth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcExtrudedAreaSolid::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcExtrudedAreaSolid::toString() const { return L"IfcExtrudedAreaSolid"; }
void IfcExtrudedAreaSolid::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcExtrudedAreaSolid, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_SweptArea, map );
	readEntityReference( args[1], m_Position, map );
	readEntityReference( args[2], m_ExtrudedDirection, map );
	m_Depth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map );
}
void IfcExtrudedAreaSolid::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcSweptAreaSolid::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "ExtrudedDirection", m_ExtrudedDirection ) );
	vec_attributes.emplace_back( std::make_pair( "Depth", m_Depth ) );
}
void IfcExtrudedAreaSolid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcSweptAreaSolid::getAttributesInverse( vec_attributes_inverse );
}
void IfcExtrudedAreaSolid::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSweptAreaSolid::setInverseCounterparts( ptr_self_entity );
}
void IfcExtrudedAreaSolid::unlinkFromInverseCounterparts()
{
	IfcSweptAreaSolid::unlinkFromInverseCounterparts();
}
