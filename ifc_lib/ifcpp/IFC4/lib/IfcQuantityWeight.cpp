/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcMassMeasure.h"
#include "ifcpp/IFC4/include/IfcNamedUnit.h"
#include "ifcpp/IFC4/include/IfcPhysicalComplexQuantity.h"
#include "ifcpp/IFC4/include/IfcQuantityWeight.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcQuantityWeight 
IfcQuantityWeight::IfcQuantityWeight( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcQuantityWeight::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcQuantityWeight> copy_self( new IfcQuantityWeight() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_Unit ) { copy_self->m_Unit = dynamic_pointer_cast<IfcNamedUnit>( m_Unit->getDeepCopy(options) ); }
	if( m_WeightValue ) { copy_self->m_WeightValue = dynamic_pointer_cast<IfcMassMeasure>( m_WeightValue->getDeepCopy(options) ); }
	if( m_Formula ) { copy_self->m_Formula = dynamic_pointer_cast<IfcLabel>( m_Formula->getDeepCopy(options) ); }
	return copy_self;
}
void IfcQuantityWeight::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCQUANTITYWEIGHT" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Unit ) { stream << "#" << m_Unit->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_WeightValue ) { m_WeightValue->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Formula ) { m_Formula->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcQuantityWeight::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcQuantityWeight::toString() const { return L"IfcQuantityWeight"; }
void IfcQuantityWeight::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcQuantityWeight, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Unit, map );
	m_WeightValue = IfcMassMeasure::createObjectFromSTEP( args[3], map );
	m_Formula = IfcLabel::createObjectFromSTEP( args[4], map );
}
void IfcQuantityWeight::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPhysicalSimpleQuantity::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "WeightValue", m_WeightValue ) );
	vec_attributes.emplace_back( std::make_pair( "Formula", m_Formula ) );
}
void IfcQuantityWeight::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPhysicalSimpleQuantity::getAttributesInverse( vec_attributes_inverse );
}
void IfcQuantityWeight::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPhysicalSimpleQuantity::setInverseCounterparts( ptr_self_entity );
}
void IfcQuantityWeight::unlinkFromInverseCounterparts()
{
	IfcPhysicalSimpleQuantity::unlinkFromInverseCounterparts();
}
