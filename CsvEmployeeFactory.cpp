#include "CsvEmployeeFactory.h"




Employee* CsvEmployeeFactory:: createEmployee(std::string empstring) {


	//if string is empty dont bother

if (empstring.empty() == false) {

	std::string manager = "manager";
	std::string OnCallTechnician = "OnCallTechnician";
	std::string salesrep = "salesrep";
	std::string Technician = "Techician";




		std::string emptype;
		std::string fname;
		std::string substring;
		std::string lname;
		std::string idnumber;
		std::string basesalary;
		int overtimehours;
		float salesamount;

		//Get employeee type

		int compos = empstring.find(',');
		emptype = empstring.substr(0, compos);
		substring = empstring.substr(compos + 1, empstring.length());


//If employee type is not recognized do not proceed
	try {

		if (emptype.compare(manager) != 0 || emptype.compare(OnCallTechnician) != 0 || emptype.compare(salesrep) != 0 || emptype.compare(Technician) != 0) {

			throw 20;
		}

			//Get employee first name
			int compos2 = substring.find(',');
			fname = substring.substr(0, compos2);
			substring = substring.substr(compos2 + 1, substring.length());


			//Get employee last name 
			int compos3 = substring.find(',');
			lname = substring.substr(0, compos3);
			substring = substring.substr(compos3 + 1, substring.length());


			//Get Employee ID
			int compos4 = substring.find(',');
			idnumber = substring.substr(0, compos4);
			substring = substring.substr(compos4 + 1, substring.length());



			//Get base salary

			int compos5 = substring.find(',');
			basesalary = substring.substr(0, compos5);
			substring = substring.substr(compos5 + 1, substring.length());



			//Get overtime hours or sales amount
			int compos6;


			std::string sales = "salesrep";
			std::string tech = "Technician";
			std::string ontech = "OnCallTechnician";


			if ((emptype.compare(sales) != 0 || emptype.compare(tech) != 0 || emptype.compare(ontech))) {


				if (emptype.compare(sales) != 0) {

					overtimehours = std::stoi(substring);
					salesamount = NULL;
				}
				else
					salesamount = std::stof(substring);
				overtimehours = NULL;
			}
			else {

				overtimehours = NULL;
				salesamount = NULL;

			}




			std::cout << emptype << std::endl;
			std::cout << fname << std::endl;
			std::cout << lname << std::endl;
			std::cout << idnumber << std::endl;
			std::cout << basesalary << std::endl;
			std::cout << overtimehours << std::endl;
			std::cout << salesamount << std::endl;




		}
		catch (int e)

		{
			std::cerr<<"Unrecognized Employee type";

}





}
else {


return NULL;
}



}