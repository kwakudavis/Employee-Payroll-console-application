#pragma once
#include<string>


class Employee

{

private:

public:
	enum months {
		January = 1,
		February = 2,
		March = 3,
		April = 4,
		May = 5,
		June = 6,
		July =7,
		August = 8,
		September =9,
		October = 10,
		November =11,
		December =12
	};

	std::string m_name;
	std::string m_surname;
	unsigned int m_id_number;
	int m_overtime_hours;
	float m_monthly_base_salary;
	float m_sales_amount;

	virtual double salary(int month)=0;



};

