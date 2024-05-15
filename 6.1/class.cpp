#include<iostream>
using namespace std;

/*
Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has the following members:
company_name
manager_salary
employee_salary
total_staff
total_annual_revenue
can_terminate
- use all attributes accessibility in the parent class and child class properly.
- override a method myAccess() in both child classes to display all parent class members' values accordingly.
*/

/*

class Admin
{
private:
    string c_name = "CMP";
    int profit = 1000000;
    int m_salary = 35000;
    int e_salary = 15000;

public:
    // Setters
    void setCompanyName(string name)
    {
        c_name = name;
    }
    void setCompanyProfit(int p)
    {
        profit = p;
    }
    void setMngSalary(int s)
    {
        m_salary = s;
    }
    void setEmpSalary(int s)
    {
        e_salary = s;
    }

    // Getters
    void getCompanyName()
    {
        cout << "Company name: " << c_name << endl;
    }
    void getCompanyProfit()
    {
        cout << "Company profit: " << profit << endl;
    }
    void getMngSalary()
    {
        cout << "Manager salary: " << m_salary << endl;
    }
    void getEmpSalary()
    {
        cout << "Emp salary: " << e_salary << endl;
    }
};

class Manager : Admin
{
public:
    

    void getEmpSlry()
    {
        getEmpSalary();
    }
};

class Employee : Manager
{
public:
    void getSalary()
    {
        getEmpSlry();
    }
};



*/

class Admin{
	protected :
		
	string	company_name = "Galaxy";
	int manager_salary;
	int	employee_salary;
	int	total_staff;
	double	total_annual_revenue;
	string	can_terminate;
	
	public :
		
		void Company_Name(string name)
		{
			 company_name = name;
		}
		
		void Manager_Salary(int salary)
		{
			 manager_salary = salary;
		}
		
		void Employee_Salary(int emp_salary)
		{
			 employee_salary = emp_salary;
		}
		
		void Total_Staff(int staff)
		{
			 total_staff = staff;
		}
		
		void Company_revenue(double	annual_revenue)
		{
			 total_annual_revenue = annual_revenue;
		}
		
		
	//getter
	
	void getCompany_Name()
	{
		cout << "Company Name : " << company_name << endl;
	}
	
	void getManager_Salary()
	{
		cout << "Manager Salary : " << manager_salary << endl;
	}    
		
	void getEmployee_salary()
	{
		cout << "Employee Salary : " << employee_salary <<endl;
	}
	
	void getTotal_staff()
	{
		cout << "Total Staff : " << total_staff << endl;
	}
	
	void getTotal_annual_revenue()
	{
		cout << "total_annual_revenue : " << total_annual_revenue;
	}	
		
};


class Manager : Admin{
	
	public :
		
		void E_salary(int emp_salary)
		{
			 Employee_Salary(emp_salary);
		}
		
		void e_staff(int staff)
		{
			Total_Staff(staff);
		}
		
		void get_E_salary()
		{
			getEmployee_salary();
		}
		void get_staff()
		{
			getTotal_staff();
		}
};

/*class Employee : Manager {

public : 

    
	void get_emp_Salary()
    {
        
    }
	void get_total_staff()
	{

	}
	void get_manager_slr()
	{

	}
	void get_annual_revenue()
	{

	}
	
};*/


	





