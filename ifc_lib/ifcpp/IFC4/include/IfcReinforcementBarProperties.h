/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPreDefinedProperties.h"
class IFCQUERY_EXPORT IfcAreaMeasure;
class IFCQUERY_EXPORT IfcLabel;
class IFCQUERY_EXPORT IfcReinforcingBarSurfaceEnum;
class IFCQUERY_EXPORT IfcLengthMeasure;
class IFCQUERY_EXPORT IfcPositiveLengthMeasure;
class IFCQUERY_EXPORT IfcCountMeasure;
//ENTITY
class IFCQUERY_EXPORT IfcReinforcementBarProperties : public IfcPreDefinedProperties
{ 
public:
	IfcReinforcementBarProperties() = default;
	IfcReinforcementBarProperties( int id );
	~IfcReinforcementBarProperties() = default;
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 6; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcReinforcementBarProperties"; }
	virtual const std::wstring toString() const;


	// IfcPropertyAbstraction -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;

	// IfcPreDefinedProperties -----------------------------------------------------------

	// IfcReinforcementBarProperties -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcAreaMeasure>									m_TotalCrossSectionArea;
	shared_ptr<IfcLabel>										m_SteelGrade;
	shared_ptr<IfcReinforcingBarSurfaceEnum>					m_BarSurface;				//optional
	shared_ptr<IfcLengthMeasure>								m_EffectiveDepth;			//optional
	shared_ptr<IfcPositiveLengthMeasure>						m_NominalBarDiameter;		//optional
	shared_ptr<IfcCountMeasure>									m_BarCount;					//optional
};

