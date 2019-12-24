#pragma once
#include "Employee.h"
class Technician :
	public Employee
{

private:

public:
	double salary(int month);

	void recordOvertime(int hours);
};

