/*
Write a Program that defines a shape class with a constructor that gives value to width and height. 
Then define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
 In the main, define two objects a triangle and a rectangle, and then call the area() function using 
 these two objects.

Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

*/


#include<iostream>
using namespace std;

class Height_width{
   
   protected :

   double width;
   double height ;

   


   public :

   Height_width()
   {

         cout << "enter width ";
         cin >> width;

         cout << "enter height : ";
         cin >> height;
   }
   

};

class Triangle :public Height_width{

      protected : 
       double t = (width * height) / 2;

       public : 
       
       void area_triangle() {
           
           cout << "height : " << height <<endl;
           cout << "width : " << width <<endl;
           cout << "area of triangle  : " << t <<endl;
       }

};

class Rectangle :public Height_width{

      protected : 
       double r = width * height;

       public : 
       
       void area_rectangle() {
           
           cout << "height : " << height <<endl;
           cout << "width : " << width <<endl;
           cout << "area of rectangle  : " << r <<endl;
       }

};

/*
 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube 
 of a number.

       a
      / \
     b   c 

*/

class Input{

protected :

 int n;
 

 public :

 Input()
 {
      cout << "Enter any number : ";
      cin >> n;
 }


};

class Square :public Input{

    public :

    int square = n*n;

    void getsquare()
    {
         cout <<endl << "Square of " << n << " : " << square <<endl ;
    }


};

class Cube :public Input{

    public :

    int cube = n*n*n;

    void getcube()
    {
         cout << "Cube of " << n << " : " << cube <<endl;
    }


};

/*
Write a Program to read and print Employee information with the use of Multilevel 
inheritance. (as same the attached image)

     a
     |
     b
     |
     c

     
A
setter: id, name, role
fields: id, name, role, salary, experience, comp_name, address, email, contact

B
setter: salary, experience

C
setter: comp_name, address
getter: name, role, salary

D
setter: email, contact
getter: id, name, role, salary, experience, comp_name, address, email, contact
*/

class Employee{
    protected :
      int id ;
      string name;
      string role;

    public :

    int Setid()
    {
        cout << "Enter your id : ";
        cin >> id;

        cout << "Enter employee name : ";
        cin >> name;

        cout << "Enter employee role : ";
        cin >> role;
    }


};

class Salary :public Employee{

  
protected : 
double salary;
double experience;

public : 

void setdata()
{
    cout << "Enter employee salary : ";
    cin >> salary;

    cout << "Enter employee experience : ";
    cin >> experience;

}
};

class Company_name :public Salary{
     
     protected :

     string comp_name, address;

     public :

     void setdata1()
     {
        cout << "Enter employee's company name : ";
        cin >> comp_name;

        cout << "Enter employee's address : ";
        cin >> address;

     }

     void getdata()
     {
        cout << "Employee name : " << name <<endl;
        cout << "Emoloyee role : " << role <<endl;
        cout << "Emoloyee salary : " << salary <<endl;

     }

  
};

class Email :public Company_name
{
protected:

string email;
int contact ;
    
public:
    
    void set_email()
    {
         cout << "Enter e-mail : ";
         cin >> email;

         cout << "Enter contact number : ";
         cin >> contact;
    }

    void getdata2()
    {
        cout  <<endl <<endl <<"id : " << id;
        cout  <<endl <<"name : " << name;
        cout  <<endl <<"role : " << role;
        cout  <<endl <<"salary : " << salary;
        cout  <<endl <<"experience : " << experience;
        cout  <<endl <<"comp name : " << comp_name;
        cout  <<endl <<"address : " << address;
        cout  <<endl <<"email : " << email;
        cout  <<endl <<"contact : " << contact;


    }
};



