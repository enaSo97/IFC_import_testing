/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGridAxis.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcVirtualGridIntersection.h"

// ENTITY IfcVirtualGridIntersection 
IfcVirtualGridIntersection::IfcVirtualGridIntersection( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcVirtualGridIntersection::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcVirtualGridIntersection> copy_self( new IfcVirtualGridIntersection() );
	for( size_t ii=0; ii<m_IntersectingAxes.size(); ++ii )
	{
		auto item_ii = m_IntersectingAxes[ii];
		if( item_ii )
		{
			copy_self->m_IntersectingAxes.emplace_back( dynamic_pointer_cast<IfcGridAxis>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_OffsetDistances.size(); ++ii )
	{
		auto item_ii = m_OffsetDistances[ii];
		if( item_ii )
		{
			copy_self->m_OffsetDistances.emplace_back( dynamic_pointer_cast<IfcLengthMeasure>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcVirtualGridIntersection::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCVIRTUALGRIDINTERSECTION" << "(";
	writeEntityList( stream, m_IntersectingAxes );
	stream << ",";
	writeNumericTypeList( stream, m_OffsetDistances );
	stream << ");";
}
void IfcVirtualGridIntersection::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcVirtualGridIntersection::toString() const { return L"IfcVirtualGridIntersection"; }
void IfcVirtualGridIntersection::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcVirtualGridIntersection, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_IntersectingAxes, map );
	readTypeOfRealList( args[1], m_OffsetDistances );
}
void IfcVirtualGridIntersection::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	if( !m_IntersectingAxes.empty() )
	{
		shared_ptr<AttributeObjectVector> IntersectingAxes_vec_object( new AttributeObjectVector() );
		std::copy( m_IntersectingAxes.begin(), m_IntersectingAxes.end(), std::back_inserter( IntersectingAxes_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "IntersectingAxes", IntersectingAxes_vec_object ) );
	}
	if( !m_OffsetDistances.empty() )
	{
		shared_ptr<AttributeObjectVector> OffsetDistances_vec_object( new AttributeObjectVector() );
		std::copy( m_OffsetDistances.begin(), m_OffsetDistances.end(), std::back_inserter( OffsetDistances_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "OffsetDistances", OffsetDistances_vec_object ) );
	}
}
void IfcVirtualGridIntersection::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcVirtualGridIntersection::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	shared_ptr<IfcVirtualGridIntersection> ptr_self = dynamic_pointer_cast<IfcVirtualGridIntersection>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcVirtualGridIntersection::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_IntersectingAxes.size(); ++i )
	{
		if( m_IntersectingAxes[i] )
		{
			m_IntersectingAxes[i]->m_HasIntersections_inverse.emplace_back( ptr_self );
		}
	}
}
void IfcVirtualGridIntersection::unlinkFromInverseCounterparts()
{
	for( size_t i=0; i<m_IntersectingAxes.size(); ++i )
	{
		if( m_IntersectingAxes[i] )
		{
			std::vector<weak_ptr<IfcVirtualGridIntersection> >& HasIntersections_inverse = m_IntersectingAxes[i]->m_HasIntersections_inverse;
			for( auto it_HasIntersections_inverse = HasIntersections_inverse.begin(); it_HasIntersections_inverse != HasIntersections_inverse.end(); )
			{
				weak_ptr<IfcVirtualGridIntersection> self_candidate_weak = *it_HasIntersections_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_HasIntersections_inverse;
					continue;
				}
				shared_ptr<IfcVirtualGridIntersection> self_candidate( *it_HasIntersections_inverse );
				if( self_candidate.get() == this )
				{
					it_HasIntersections_inverse= HasIntersections_inverse.erase( it_HasIntersections_inverse );
				}
				else
				{
					++it_HasIntersections_inverse;
				}
			}
		}
	}
}
