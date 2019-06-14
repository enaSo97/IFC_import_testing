/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"
#include "ifcpp/IFC4/include/IfcTextureVertexList.h"

// ENTITY IfcTextureVertexList 
IfcTextureVertexList::IfcTextureVertexList( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcTextureVertexList::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTextureVertexList> copy_self( new IfcTextureVertexList() );
	copy_self->m_TexCoordsList.resize( m_TexCoordsList.size() );
	for( size_t ii=0; ii<m_TexCoordsList.size(); ++ii )
	{
		std::vector<shared_ptr<IfcParameterValue> >& vec_ii = m_TexCoordsList[ii];
		std::vector<shared_ptr<IfcParameterValue> >& vec_ii_target = copy_self->m_TexCoordsList[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcParameterValue>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.emplace_back( dynamic_pointer_cast<IfcParameterValue>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	return copy_self;
}
void IfcTextureVertexList::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTEXTUREVERTEXLIST" << "(";
	writeNumericTypeList2D( stream, m_TexCoordsList );
	stream << ");";
}
void IfcTextureVertexList::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTextureVertexList::toString() const { return L"IfcTextureVertexList"; }
void IfcTextureVertexList::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTextureVertexList, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readTypeOfRealList2D( args[0], m_TexCoordsList );
}
void IfcTextureVertexList::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPresentationItem::getAttributes( vec_attributes );
}
void IfcTextureVertexList::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcTextureVertexList::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcTextureVertexList::unlinkFromInverseCounterparts()
{
	IfcPresentationItem::unlinkFromInverseCounterparts();
}