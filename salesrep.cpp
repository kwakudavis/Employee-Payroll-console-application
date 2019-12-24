#include "salesrep.h"



double salesrep::salary(int month)
{
	return m_sales_amount * 0.10;
}

void salesrep::recordSales(float sales)
{

	m_sales_amount = sales;
}
