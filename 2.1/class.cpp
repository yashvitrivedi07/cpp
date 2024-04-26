/*
 Q.1 Write a Program to create an Employee Record System using the Class & Object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_salary
- emp_city
- emp_experience
- emp_company_name


Q.2 Write a Program to create a Car Record System using the Class & Object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
- car_id
- car_company_name
- car_color
- car_model
- car_release_year
*/
#include<iostream>
using namespace std;

class Employee{
private :
int emp_id;
string emp_name;
int emp_age;
string emp_role;
int emp_salary;
string emp_city;
double emp_experience;
string emp_company_name;


public :
void Setemployeedata()
{
    
    cout <<endl <<endl << "enter employee id : ";
    cin >> emp_id;

    cout << "enter employee name : ";
    cin >> emp_name;

    cout << "enter employee age : ";
    cin >> emp_age;

    cout << "enter employee role : ";
    cin >> emp_role;

    cout << "enter employee salary : ";
    cin >> emp_salary;

    cout << "enter employee city : ";
    cin >> emp_city;

    cout << "enter employee experience : ";
    cin >> emp_experience;

    cout << "enter employee companyname : ";
    cin >> emp_company_name;
}


void Getemployeedata()
{
    cout <<endl <<endl << "id           : " << emp_id <<endl;
    cout << "name         : " << emp_name <<endl;
    cout << "age          : " << emp_age <<endl;
    cout << "role         : " << emp_role <<endl;
    cout << "salary       : " << emp_salary <<endl;
    cout << "city         : " << emp_city <<endl;
    cout << "experience   : " << emp_experience <<endl;
    cout << "company name : " << emp_company_name <<endl;

}

};


class Car{
private:
int  car_id;
string car_company_name;
string car_color;
string car_model;
int car_release_year;

public:

void Setcardata()
{
    cout <<endl << endl << "enter car id : ";
    cin >> car_id;
    cout << "enter car company name : ";
    cin >> car_company_name;
    cout << "enter car color : ";
    cin >> car_color;
    cout << "enter car model : ";
    cin >> car_model;
    cout << "enter car release year : ";
    cin >> car_release_year;
}

void Getcardata()
{
    cout << endl <<endl << "id           : " << car_id <<endl;
    cout << "company name : " << car_company_name <<endl;
    cout << "color        : " << car_color <<endl;
    cout << "model        : " << car_model <<endl;
    cout << "release year : " << car_release_year <<endl;

}
};