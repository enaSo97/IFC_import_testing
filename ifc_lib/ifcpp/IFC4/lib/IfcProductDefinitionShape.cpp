/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcProduct.h"
#include "ifcpp/IFC4/include/IfcProductDefinitionShape.h"
#include "ifcpp/IFC4/include/IfcRepresentation.h"
#include "ifcpp/IFC4/include/IfcShapeAspect.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcProductDefinitionShape 
IfcProductDefinitionShape::IfcProductDefinitionShape( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcProductDefinitionShape::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcProductDefinitionShape> copy_self( new IfcProductDefinitionShape() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Representations.size(); ++ii )
	{
		auto item_ii = m_Representations[ii];
		if( item_ii )
		{
			copy_self->m_Representations.emplace_back( dynamic_pointer_cast<IfcRepresentation>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcProductDefinitionShape::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPRODUCTDEFINITIONSHAPE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_Representations );
	stream << ");";
}
void IfcProductDefinitionShape::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcProductDefinitionShape::toString() const { return L"IfcProductDefinitionShape"; }
void IfcProductDefinitionShape::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcProductDefinitionShape, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReferenceList( args[2], m_Representations, map );
}
void IfcProductDefinitionShape::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcProductRepresentation::getAttributes( vec_attributes );
}
void IfcProductDefinitionShape::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcProductRepresentation::getAttributesInverse( vec_attributes_inverse );
	if( !m_ShapeOfProduct_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ShapeOfProduct_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ShapeOfProduct_inverse.size(); ++i )
		{
			if( !m_ShapeOfProduct_inverse[i].expired() )
			{
				ShapeOfProduct_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcProduct>( m_ShapeOfProduct_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ShapeOfProduct_inverse", ShapeOfProduct_inverse_vec_obj ) );
	}
	if( !m_HasShapeAspects_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> HasShapeAspects_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_HasShapeAspects_inverse.size(); ++i )
		{
			if( !m_HasShapeAspects_inverse[i].expired() )
			{
				HasShapeAspects_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcShapeAspect>( m_HasShapeAspects_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "HasShapeAspects_inverse", HasShapeAspects_inverse_vec_obj ) );
	}
}
void IfcProductDefinitionShape::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcProductRepresentation::setInverseCounterparts( ptr_self_entity );
}
void IfcProductDefinitionShape::unlinkFromInverseCounterparts()
{
	IfcProductRepresentation::unlinkFromInverseCounterparts();
}