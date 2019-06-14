/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcTableRow.h"
#include "ifcpp/IFC4/include/IfcValue.h"

// ENTITY IfcTableRow 
IfcTableRow::IfcTableRow( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcTableRow::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTableRow> copy_self( new IfcTableRow() );
	for( size_t ii=0; ii<m_RowCells.size(); ++ii )
	{
		auto item_ii = m_RowCells[ii];
		if( item_ii )
		{
			copy_self->m_RowCells.emplace_back( dynamic_pointer_cast<IfcValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_IsHeading ) { copy_self->m_IsHeading = dynamic_pointer_cast<IfcBoolean>( m_IsHeading->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTableRow::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTABLEROW" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_RowCells.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcValue>& type_object = m_RowCells[ii];
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
	if( m_IsHeading ) { m_IsHeading->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcTableRow::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTableRow::toString() const { return L"IfcTableRow"; }
void IfcTableRow::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTableRow, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readSelectList( args[0], m_RowCells, map );
	m_IsHeading = IfcBoolean::createObjectFromSTEP( args[1], map );
}
void IfcTableRow::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	if( !m_RowCells.empty() )
	{
		shared_ptr<AttributeObjectVector> RowCells_vec_object( new AttributeObjectVector() );
		std::copy( m_RowCells.begin(), m_RowCells.end(), std::back_inserter( RowCells_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "RowCells", RowCells_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "IsHeading", m_IsHeading ) );
}
void IfcTableRow::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcTableRow::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcTableRow::unlinkFromInverseCounterparts()
{
}
