/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcAppliedValueSelect.h"
#include "IfcMetricValueSelect.h"
class IFCQUERY_EXPORT IfcIdentifier;
class IFCQUERY_EXPORT IfcLabel;
class IFCQUERY_EXPORT IfcInteger;
class IFCQUERY_EXPORT IfcReference;
//ENTITY
class IFCQUERY_EXPORT IfcReference : virtual public IfcAppliedValueSelect, virtual public IfcMetricValueSelect, public BuildingEntity
{ 
public:
	IfcReference() = default;
	IfcReference( int id );
	~IfcReference() = default;
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 5; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcReference"; }
	virtual const std::wstring toString() const;


	// IfcReference -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcIdentifier>				m_TypeIdentifier;			//optional
	shared_ptr<IfcIdentifier>				m_AttributeIdentifier;		//optional
	shared_ptr<IfcLabel>					m_InstanceName;				//optional
	std::vector<shared_ptr<IfcInteger> >	m_ListPositions;			//optional
	shared_ptr<IfcReference>				m_InnerReference;			//optional
};
