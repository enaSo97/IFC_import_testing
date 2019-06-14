#pragma once
#include <ifcpp/model/BuildingModel.h>
#include <ifcpp/reader/ReaderSTEP.h>
#include <ifcpp/IFC4/include/IfcProject.h>
#include <ifcpp/IFC4/include/IfcSite.h>
#include <ifcpp/IFC4/include/IfcBuilding.h>
#include <ifcpp/IFC4/include/IfcBuildingStorey.h>
#include <ifcpp/model/BasicTypes.h>
#include <ifcpp/model/BuildingModel.h>
#include <ifcpp/IFC4/include/IfcRelAggregates.h>
#include "ifcpp/model/StatusCallback.h"

class import
{
public:
	import();

	void import_ifc_project(std::shared_ptr<IfcProject> &ifc_project_p);

	void import_ifc_site(std::shared_ptr<IfcSite> &ifc_site_p);

	void import_ifc_building(std::shared_ptr<IfcBuilding>& entity_p);

	void import_ifc_building_storey(std::shared_ptr<IfcBuildingStorey>& building_storey_p);

	void import_ifc_product(std::shared_ptr<IfcProduct> product_p);

	void for_all_aggregates(std::vector<std::weak_ptr<IfcRelAggregates>> & _aggregates, std::function<void(std::shared_ptr<IfcObjectDefinition>&)> _func);
	
	template<typename _Cast_to, typename _Pointer, typename _Function, typename... _Args >
	bool call_member_on_cast(_Pointer& _pointer, _Function _func, _Args&&... _args);
};