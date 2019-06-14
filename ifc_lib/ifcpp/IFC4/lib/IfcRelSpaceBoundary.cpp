/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcConnectionGeometry.h"
#include "ifcpp/IFC4/include/IfcElement.h"
#include "ifcpp/IFC4/include/IfcExternalSpatialElement.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcInternalOrExternalEnum.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPhysicalOrVirtualEnum.h"
#include "ifcpp/IFC4/include/IfcRelSpaceBoundary.h"
#include "ifcpp/IFC4/include/IfcSpace.h"
#include "ifcpp/IFC4/include/IfcSpaceBoundarySelect.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelSpaceBoundary 
IfcRelSpaceBoundary::IfcRelSpaceBoundary( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcRelSpaceBoundary::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelSpaceBoundary> copy_self( new IfcRelSpaceBoundary() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = make_shared<IfcGloballyUniqueId>( createBase64Uuid<wchar_t>().data() ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_RelatingSpace ) { copy_self->m_RelatingSpace = dynamic_pointer_cast<IfcSpaceBoundarySelect>( m_RelatingSpace->getDeepCopy(options) ); }
	if( m_RelatedBuildingElement ) { copy_self->m_RelatedBuildingElement = dynamic_pointer_cast<IfcElement>( m_RelatedBuildingElement->getDeepCopy(options) ); }
	if( m_ConnectionGeometry ) { copy_self->m_ConnectionGeometry = dynamic_pointer_cast<IfcConnectionGeometry>( m_ConnectionGeometry->getDeepCopy(options) ); }
	if( m_PhysicalOrVirtualBoundary ) { copy_self->m_PhysicalOrVirtualBoundary = dynamic_pointer_cast<IfcPhysicalOrVirtualEnum>( m_PhysicalOrVirtualBoundary->getDeepCopy(options) ); }
	if( m_InternalOrExternalBoundary ) { copy_self->m_InternalOrExternalBoundary = dynamic_pointer_cast<IfcInternalOrExternalEnum>( m_InternalOrExternalBoundary->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelSpaceBoundary::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELSPACEBOUNDARY" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingSpace ) { m_RelatingSpace->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_RelatedBuildingElement ) { stream << "#" << m_RelatedBuildingElement->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_ConnectionGeometry ) { stream << "#" << m_ConnectionGeometry->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_PhysicalOrVirtualBoundary ) { m_PhysicalOrVirtualBoundary->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_InternalOrExternalBoundary ) { m_InternalOrExternalBoundary->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcRelSpaceBoundary::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelSpaceBoundary::toString() const { return L"IfcRelSpaceBoundary"; }
void IfcRelSpaceBoundary::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelSpaceBoundary, expecting 9, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_RelatingSpace = IfcSpaceBoundarySelect::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_RelatedBuildingElement, map );
	readEntityReference( args[6], m_ConnectionGeometry, map );
	m_PhysicalOrVirtualBoundary = IfcPhysicalOrVirtualEnum::createObjectFromSTEP( args[7], map );
	m_InternalOrExternalBoundary = IfcInternalOrExternalEnum::createObjectFromSTEP( args[8], map );
}
void IfcRelSpaceBoundary::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRelConnects::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingSpace", m_RelatingSpace ) );
	vec_attributes.emplace_back( std::make_pair( "RelatedBuildingElement", m_RelatedBuildingElement ) );
	vec_attributes.emplace_back( std::make_pair( "ConnectionGeometry", m_ConnectionGeometry ) );
	vec_attributes.emplace_back( std::make_pair( "PhysicalOrVirtualBoundary", m_PhysicalOrVirtualBoundary ) );
	vec_attributes.emplace_back( std::make_pair( "InternalOrExternalBoundary", m_InternalOrExternalBoundary ) );
}
void IfcRelSpaceBoundary::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRelConnects::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelSpaceBoundary::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelConnects::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelSpaceBoundary> ptr_self = dynamic_pointer_cast<IfcRelSpaceBoundary>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelSpaceBoundary::setInverseCounterparts: type mismatch" ); }
	if( m_RelatedBuildingElement )
	{
		m_RelatedBuildingElement->m_ProvidesBoundaries_inverse.emplace_back( ptr_self );
	}
	shared_ptr<IfcExternalSpatialElement>  RelatingSpace_IfcExternalSpatialElement = dynamic_pointer_cast<IfcExternalSpatialElement>( m_RelatingSpace );
	if( RelatingSpace_IfcExternalSpatialElement )
	{
		RelatingSpace_IfcExternalSpatialElement->m_BoundedBy_inverse.emplace_back( ptr_self );
	}
	shared_ptr<IfcSpace>  RelatingSpace_IfcSpace = dynamic_pointer_cast<IfcSpace>( m_RelatingSpace );
	if( RelatingSpace_IfcSpace )
	{
		RelatingSpace_IfcSpace->m_BoundedBy_inverse.emplace_back( ptr_self );
	}
}
void IfcRelSpaceBoundary::unlinkFromInverseCounterparts()
{
	IfcRelConnects::unlinkFromInverseCounterparts();
	if( m_RelatedBuildingElement )
	{
		std::vector<weak_ptr<IfcRelSpaceBoundary> >& ProvidesBoundaries_inverse = m_RelatedBuildingElement->m_ProvidesBoundaries_inverse;
		for( auto it_ProvidesBoundaries_inverse = ProvidesBoundaries_inverse.begin(); it_ProvidesBoundaries_inverse != ProvidesBoundaries_inverse.end(); )
		{
			weak_ptr<IfcRelSpaceBoundary> self_candidate_weak = *it_ProvidesBoundaries_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_ProvidesBoundaries_inverse;
				continue;
			}
			shared_ptr<IfcRelSpaceBoundary> self_candidate( *it_ProvidesBoundaries_inverse );
			if( self_candidate.get() == this )
			{
				it_ProvidesBoundaries_inverse= ProvidesBoundaries_inverse.erase( it_ProvidesBoundaries_inverse );
			}
			else
			{
				++it_ProvidesBoundaries_inverse;
			}
		}
	}
	shared_ptr<IfcExternalSpatialElement>  RelatingSpace_IfcExternalSpatialElement = dynamic_pointer_cast<IfcExternalSpatialElement>( m_RelatingSpace );
	if( RelatingSpace_IfcExternalSpatialElement )
	{
		std::vector<weak_ptr<IfcRelSpaceBoundary> >& BoundedBy_inverse = RelatingSpace_IfcExternalSpatialElement->m_BoundedBy_inverse;
		for( auto it_BoundedBy_inverse = BoundedBy_inverse.begin(); it_BoundedBy_inverse != BoundedBy_inverse.end(); )
		{
			weak_ptr<IfcRelSpaceBoundary> self_candidate_weak = *it_BoundedBy_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_BoundedBy_inverse;
				continue;
			}
			shared_ptr<IfcRelSpaceBoundary> self_candidate( *it_BoundedBy_inverse );
			if( self_candidate.get() == this )
			{
				it_BoundedBy_inverse= BoundedBy_inverse.erase( it_BoundedBy_inverse );
			}
			else
			{
				++it_BoundedBy_inverse;
			}
		}
	}
	shared_ptr<IfcSpace>  RelatingSpace_IfcSpace = dynamic_pointer_cast<IfcSpace>( m_RelatingSpace );
	if( RelatingSpace_IfcSpace )
	{
		std::vector<weak_ptr<IfcRelSpaceBoundary> >& BoundedBy_inverse = RelatingSpace_IfcSpace->m_BoundedBy_inverse;
		for( auto it_BoundedBy_inverse = BoundedBy_inverse.begin(); it_BoundedBy_inverse != BoundedBy_inverse.end(); )
		{
			weak_ptr<IfcRelSpaceBoundary> self_candidate_weak = *it_BoundedBy_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_BoundedBy_inverse;
				continue;
			}
			shared_ptr<IfcRelSpaceBoundary> self_candidate( *it_BoundedBy_inverse );
			if( self_candidate.get() == this )
			{
				it_BoundedBy_inverse= BoundedBy_inverse.erase( it_BoundedBy_inverse );
			}
			else
			{
				++it_BoundedBy_inverse;
			}
		}
	}
}
