/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcComplexProperty.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcPropertyDependencyRelationship.h"
#include "ifcpp/IFC4/include/IfcPropertyEnumeratedValue.h"
#include "ifcpp/IFC4/include/IfcPropertyEnumeration.h"
#include "ifcpp/IFC4/include/IfcPropertySet.h"
#include "ifcpp/IFC4/include/IfcResourceApprovalRelationship.h"
#include "ifcpp/IFC4/include/IfcResourceConstraintRelationship.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcValue.h"

// ENTITY IfcPropertyEnumeratedValue 
IfcPropertyEnumeratedValue::IfcPropertyEnumeratedValue( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPropertyEnumeratedValue::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPropertyEnumeratedValue> copy_self( new IfcPropertyEnumeratedValue() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcIdentifier>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_EnumerationValues.size(); ++ii )
	{
		auto item_ii = m_EnumerationValues[ii];
		if( item_ii )
		{
			copy_self->m_EnumerationValues.emplace_back( dynamic_pointer_cast<IfcValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_EnumerationReference ) { copy_self->m_EnumerationReference = dynamic_pointer_cast<IfcPropertyEnumeration>( m_EnumerationReference->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPropertyEnumeratedValue::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPROPERTYENUMERATEDVALUE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_EnumerationValues.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcValue>& type_object = m_EnumerationValues[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_EnumerationReference ) { stream << "#" << m_EnumerationReference->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcPropertyEnumeratedValue::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPropertyEnumeratedValue::toString() const { return L"IfcPropertyEnumeratedValue"; }
void IfcPropertyEnumeratedValue::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPropertyEnumeratedValue, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcIdentifier::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readSelectList( args[2], m_EnumerationValues, map );
	readEntityReference( args[3], m_EnumerationReference, map );
}
void IfcPropertyEnumeratedValue::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcSimpleProperty::getAttributes( vec_attributes );
	if( !m_EnumerationValues.empty() )
	{
		shared_ptr<AttributeObjectVector> EnumerationValues_vec_object( new AttributeObjectVector() );
		std::copy( m_EnumerationValues.begin(), m_EnumerationValues.end(), std::back_inserter( EnumerationValues_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "EnumerationValues", EnumerationValues_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "EnumerationReference", m_EnumerationReference ) );
}
void IfcPropertyEnumeratedValue::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcSimpleProperty::getAttributesInverse( vec_attributes_inverse );
}
void IfcPropertyEnumeratedValue::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSimpleProperty::setInverseCounterparts( ptr_self_entity );
}
void IfcPropertyEnumeratedValue::unlinkFromInverseCounterparts()
{
	IfcSimpleProperty::unlinkFromInverseCounterparts();
}
