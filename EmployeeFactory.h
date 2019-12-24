#pragma once
#include<string>
#include<string>
#include "Employee.h"
#include "manager.h"
#include "salesrep.h"
#include "Technician.h"
#include "OnCallTechnician.h" 




class EmployeeFactory
{

private:

protected:

	virtual Employee* createEmployee(std::string empstring) = 0;


};

