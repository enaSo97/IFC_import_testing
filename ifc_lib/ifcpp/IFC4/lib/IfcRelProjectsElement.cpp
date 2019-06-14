/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcElement.h"
#include "ifcpp/IFC4/include/IfcFeatureElementAddition.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelProjectsElement.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelProjectsElement 
IfcRelProjectsElement::IfcRelProjectsElement( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcRelProjectsElement::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRelProjectsElement> copy_self( new IfcRelProjectsElement() );
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
	if( m_RelatingElement ) { copy_self->m_RelatingElement = dynamic_pointer_cast<IfcElement>( m_RelatingElement->getDeepCopy(options) ); }
	if( m_RelatedFeatureElement ) { copy_self->m_RelatedFeatureElement = dynamic_pointer_cast<IfcFeatureElementAddition>( m_RelatedFeatureElement->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelProjectsElement::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELPROJECTSELEMENT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingElement ) { stream << "#" << m_RelatingElement->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_RelatedFeatureElement ) { stream << "#" << m_RelatedFeatureElement->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcRelProjectsElement::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelProjectsElement::toString() const { return L"IfcRelProjectsElement"; }
void IfcRelProjectsElement::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelProjectsElement, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReference( args[4], m_RelatingElement, map );
	readEntityReference( args[5], m_RelatedFeatureElement, map );
}
void IfcRelProjectsElement::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRelDecomposes::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingElement", m_RelatingElement ) );
	vec_attributes.emplace_back( std::make_pair( "RelatedFeatureElement", m_RelatedFeatureElement ) );
}
void IfcRelProjectsElement::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRelDecomposes::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelProjectsElement::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRelDecomposes::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelProjectsElement> ptr_self = dynamic_pointer_cast<IfcRelProjectsElement>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcRelProjectsElement::setInverseCounterparts: type mismatch" ); }
	if( m_RelatedFeatureElement )
	{
		m_RelatedFeatureElement->m_ProjectsElements_inverse = ptr_self;
	}
	if( m_RelatingElement )
	{
		m_RelatingElement->m_HasProjections_inverse.emplace_back( ptr_self );
	}
}
void IfcRelProjectsElement::unlinkFromInverseCounterparts()
{
	IfcRelDecomposes::unlinkFromInverseCounterparts();
	if( m_RelatedFeatureElement )
	{
		if( !m_RelatedFeatureElement->m_ProjectsElements_inverse.expired() )
		{
			shared_ptr<IfcRelProjectsElement> self_candidate( m_RelatedFeatureElement->m_ProjectsElements_inverse );
			if( self_candidate.get() == this )
			{
				weak_ptr<IfcRelProjectsElement>& self_candidate_weak = m_RelatedFeatureElement->m_ProjectsElements_inverse;
				self_candidate_weak.reset();
			}
		}
	}
	if( m_RelatingElement )
	{
		std::vector<weak_ptr<IfcRelProjectsElement> >& HasProjections_inverse = m_RelatingElement->m_HasProjections_inverse;
		for( auto it_HasProjections_inverse = HasProjections_inverse.begin(); it_HasProjections_inverse != HasProjections_inverse.end(); )
		{
			weak_ptr<IfcRelProjectsElement> self_candidate_weak = *it_HasProjections_inverse;
			if( self_candidate_weak.expired() )
			{
				++it_HasProjections_inverse;
				continue;
			}
			shared_ptr<IfcRelProjectsElement> self_candidate( *it_HasProjections_inverse );
			if( self_candidate.get() == this )
			{
				it_HasProjections_inverse= HasProjections_inverse.erase( it_HasProjections_inverse );
			}
			else
			{
				++it_HasProjections_inverse;
			}
		}
	}
}
