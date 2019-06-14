/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
class IFCQUERY_EXPORT IfcPersonAndOrganization;
class IFCQUERY_EXPORT IfcApplication;
class IFCQUERY_EXPORT IfcStateEnum;
class IFCQUERY_EXPORT IfcChangeActionEnum;
class IFCQUERY_EXPORT IfcTimeStamp;
//ENTITY
class IFCQUERY_EXPORT IfcOwnerHistory : public BuildingEntity
{ 
public:
	IfcOwnerHistory() = default;
	IfcOwnerHistory( int id );
	~IfcOwnerHistory() = default;
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 8; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcOwnerHistory"; }
	virtual const std::wstring toString() const;


	// IfcOwnerHistory -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcPersonAndOrganization>	m_OwningUser;
	shared_ptr<IfcApplication>				m_OwningApplication;
	shared_ptr<IfcStateEnum>				m_State;					//optional
	shared_ptr<IfcChangeActionEnum>			m_ChangeAction;				//optional
	shared_ptr<IfcTimeStamp>				m_LastModifiedDate;			//optional
	shared_ptr<IfcPersonAndOrganization>	m_LastModifyingUser;		//optional
	shared_ptr<IfcApplication>				m_LastModifyingApplication;	//optional
	shared_ptr<IfcTimeStamp>				m_CreationDate;
};

