#include <iostream>
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <Windows.h>
#include <ifcpp/reader/ReaderSTEP.h>
#include <ifcpp/IFC4/include/IfcProject.h>
#include <ifcpp/model/BasicTypes.h>
#include <ifcpp/model/BuildingModel.h>
#include <ifcpp/IFC4/include/IfcRelAggregates.h>
#include <Header.h>

void import::for_all_aggregates(std::vector<std::weak_ptr<IfcRelAggregates>> & _aggregates, std::function<void(std::shared_ptr<IfcObjectDefinition>&)> _func)
{
	for (auto& aggregate_weak_p : _aggregates)
	{
		if (auto aggregate_shared_p = aggregate_weak_p.lock())
		{
			for (auto& related_obj_p : aggregate_shared_p->m_RelatedObjects)
			{
				_func(related_obj_p);
			}
		}
	}
}
template<typename _Cast_to, typename _Pointer, typename _Function, typename... _Args >
bool import::call_member_on_cast(_Pointer& _pointer, _Function _func, _Args&&... _args)
{
	auto	casted_p = dynamic_pointer_cast<_Cast_to>(_pointer);
	if (casted_p)
	{
		//std::bind( _func, this, t_pointer, std::forward<_Args&&>( _args )... )();
		(this->*_func)(casted_p, std::forward<_Args>(_args)...);
		return true;
	}

	return false;
}

void import::import_ifc_project(std::shared_ptr<IfcProject> &ifc_project) {
	std::vector<std::weak_ptr<IfcRelAggregates>> agger = ifc_project->m_IsDecomposedBy_inverse;
	for_all_aggregates(ifc_project->m_IsDecomposedBy_inverse, [&](std::shared_ptr<IfcObjectDefinition>& obj_def) {
		call_member_on_cast<IfcSite>(obj_def, &import::import_ifc_site);
	});
}

//void aggregates(std::vector<std::weak_ptr<IfcRelAggregates>>& aggregates, std::function)

int main() {
	std::wstring filepath = L"C:\\Users\\ena\\Documents\\IFC Blocks\\Duplex_A_20110505.ifc";
	shared_ptr<BuildingModel> model(new BuildingModel());
	shared_ptr<ReaderSTEP> reader(new ReaderSTEP);
	shared_ptr<import> importPtr(new import());
	reader->loadModelFromFile(filepath, model);
	auto ifcProject_p = model->getIfcProject();
	
	importPtr->import_ifc_project(ifcProject_p);

	//OutputDegubString("debug\n");

	std::cout << "finished\n";
	
	return 0;

}


