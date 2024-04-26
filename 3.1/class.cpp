/*
Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_email
- stu_college

Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
- cust_id
- cust_name
- cust_age
- cust_city
- cust_mobile_number
- cust_simcard_validity (in years)
- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)
*/
#include<iostream>
using namespace std;

class Student{
    private:
int stu_id;
string stu_name;
int stu_age;
string stu_course;
string stu_city;      //cust
string stu_email;
string stu_college;   //cust

public:

void setstudentdata()
{
     cout<<endl <<endl  << "enter student id : ";
     cin >> stu_id;

     cout << "enter student name : ";
     cin >> stu_name;

     cout << "enter student age : ";
     cin >> stu_age;

     cout << "enter student course : ";
     cin >> stu_course;

     cout << "enter student city : ";
     cin >> stu_city;

     cout << "enter student email : ";
     cin >> stu_email;
}

void studentcollege()
{
       stu_college = "vanita vishram";
}

void getdata()
{
      cout << endl <<endl <<"id   : " <<stu_id <<endl;
      cout << "name   : "<< stu_name <<endl;
      cout << "age    : "<< stu_age <<endl;
      cout << "course : "<< stu_course <<endl;
      cout << "city   : " << stu_city <<endl;
      cout << "email  : " << stu_email <<endl;
      

}

void getstudentdata()
{
    cout << "college : " << stu_college;
}


};


class Customer{
    private:
int cust_id;
string cust_name;
int cust_age;
string cust_city;
long long int cust_mobile_number;
int cust_simcard_validity ;
string cust_telecom_brand_name ;

public:


void setcusdata()
{
    cout << endl << endl <<"customer id : ";
    cin >> cust_id;

    cout << "customer name : ";
    cin >> cust_name;

    cout << "customer age : ";
    cin >> cust_age;

    cout << "customer city : ";
    cin >> cust_city;

    cout << "customer mobile number : ";
    cin >> cust_mobile_number;

    
}
void cust_validity()
{
    cust_simcard_validity = 180;
}

void cust_telecom()
{
    cust_telecom_brand_name = "Airtel";
}

void getcustdata()
{
     cout <<endl <<endl <<"id : " << cust_id <<endl;
     cout <<"name : " << cust_name <<endl;
     cout <<"age : " << cust_age <<endl;
     cout <<"city : " << cust_city <<endl;
     cout <<"mobile number : " << cust_mobile_number <<endl;
     
}

void getcust_telecom()
{
    cout <<"telecom brand name : " <<cust_telecom_brand_name;
}

void getvalidity()
{
    cout <<"simcard validity : " << cust_simcard_validity;
}


};