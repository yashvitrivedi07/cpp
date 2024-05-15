#include <iostream>
using namespace std;

/*
Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such like:
- the area of a circle
- the area of a triangle
- the area of a rectangle
- use one single pure virtual function named calculate() to perform all the above operations

*/


class Getdata{

public:

virtual  void calculate () = 0;

};

class Perform : public Getdata
{
      public :
      
      void calculate()
      {
             int choice ;
             double radious , circle , base , height , triangle ,rectangle , width ,length;

        cout << "Enter 1 to find area of circle : " <<endl ;
        cout << "Enter 2 to find area of triangle : " <<endl;
        cout << "Enter 3 to find area of rectangle : "<<endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter radious : ";
            cin >> radious;

            circle = radious * 3.14 * radious;
            cout << "Area of circle  : " << circle;
            break;
        
        case 2:
            cout << "Enter base : ";
            cin >> base ;
            cout << "Enter height : ";
            cin >> height;

            triangle = (base * height)/2;
            cout << " area of triangle : " <<triangle;
            break;
        

        case 3:
          cout << "Enter Length : ";
          cin >> length;
          cout << "Enter Width : ";
          cin >> width;

          rectangle =  length * width;

          cout << "- the area of a rectangle : " << rectangle;
          break;
       
        default :

        cout << "Invalid input ----";

        }
     
      }
      
    
        
};