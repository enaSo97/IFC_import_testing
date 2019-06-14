/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcPresentationItem.h"

// ENTITY IfcPresentationItem 
IfcPresentationItem::IfcPresentationItem( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPresentationItem::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPresentationItem> copy_self( new IfcPresentationItem() );
	return copy_self;
}
void IfcPresentationItem::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPRESENTATIONITEM" << "(";
	stream << ");";
}
void IfcPresentationItem::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPresentationItem::toString() const { return L"IfcPresentationItem"; }
void IfcPresentationItem::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
}
void IfcPresentationItem::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
}
void IfcPresentationItem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcPresentationItem::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcPresentationItem::unlinkFromInverseCounterparts()
{
}
