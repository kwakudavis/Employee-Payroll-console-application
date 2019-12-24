#pragma once
#include "Employee.h"
class salesrep :
	public Employee
{
public:
	double salary(int month);
	void recordSales(float sales);


};

