/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcAppliedValue.h"
//ENTITY
class IFCQUERY_EXPORT IfcCostValue : public IfcAppliedValue
{ 
public:
	IfcCostValue() = default;
	IfcCostValue( int id );
	~IfcCostValue() = default;
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 10; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcCostValue"; }
	virtual const std::wstring toString() const;


	// IfcAppliedValue -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>										m_Name;						//optional
	//  shared_ptr<IfcText>											m_Description;				//optional
	//  shared_ptr<IfcAppliedValueSelect>							m_AppliedValue;				//optional
	//  shared_ptr<IfcMeasureWithUnit>								m_UnitBasis;				//optional
	//  shared_ptr<IfcDate>											m_ApplicableDate;			//optional
	//  shared_ptr<IfcDate>											m_FixedUntilDate;			//optional
	//  shared_ptr<IfcLabel>										m_Category;					//optional
	//  shared_ptr<IfcLabel>										m_Condition;				//optional
	//  shared_ptr<IfcArithmeticOperatorEnum>						m_ArithmeticOperator;		//optional
	//  std::vector<shared_ptr<IfcAppliedValue> >					m_Components;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReference_inverse;

	// IfcCostValue -----------------------------------------------------------
};
