#include "manager.h"



double manager:: salary(int month) {



	if (month == 12) {

		return  m_monthly_base_salary * 1.05;
	}

	return m_monthly_base_salary;
}