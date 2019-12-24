#pragma once
#include "EmployeeFactory.h"
#include <string>
#include <iostream>


class CsvEmployeeFactory :
	public EmployeeFactory
{
private:


public:
	Employee* createEmployee(std::string empstring);

};

