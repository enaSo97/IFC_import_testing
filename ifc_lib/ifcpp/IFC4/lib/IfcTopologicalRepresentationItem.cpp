/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcTopologicalRepresentationItem.h"

// ENTITY IfcTopologicalRepresentationItem 
IfcTopologicalRepresentationItem::IfcTopologicalRepresentationItem( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcTopologicalRepresentationItem::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcTopologicalRepresentationItem> copy_self( new IfcTopologicalRepresentationItem() );
	return copy_self;
}
void IfcTopologicalRepresentationItem::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTOPOLOGICALREPRESENTATIONITEM" << "(";
	stream << ");";
}
void IfcTopologicalRepresentationItem::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTopologicalRepresentationItem::toString() const { return L"IfcTopologicalRepresentationItem"; }
void IfcTopologicalRepresentationItem::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
}
void IfcTopologicalRepresentationItem::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcRepresentationItem::getAttributes( vec_attributes );
}
void IfcTopologicalRepresentationItem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcTopologicalRepresentationItem::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcTopologicalRepresentationItem::unlinkFromInverseCounterparts()
{
	IfcRepresentationItem::unlinkFromInverseCounterparts();
}