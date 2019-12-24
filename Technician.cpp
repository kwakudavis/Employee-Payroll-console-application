#include "Technician.h"




double Technician::salary(int month) {



	return  m_monthly_base_salary + (m_overtime_hours * 20);
}


void Technician::recordOvertime(int hours)
{
	m_overtime_hours = hours;

}