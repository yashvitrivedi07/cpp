#include"class.cpp"

int main()
{


	Admin a;
	Manager m;
	
    a.Company_Name("Galaxy");
	a.Company_revenue(50000);
	a.Manager_Salary(500000);

	a.getCompany_Name();
	a.getManager_Salary();
	a.getTotal_annual_revenue();


	m.E_salary(10000);
	m.e_staff(50);
	m.get_E_salary();
	m.get_staff();


	


    return 0;
}