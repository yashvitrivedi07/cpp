#include<iostream>
using namespace std;
/*
Q.1 Write a Program to overload < operator to find which object contains a higher 
value from given 2 numbers.
*/

class Compare{
     private :
     int a,b;

     public:
     void setdata()
     {
             cout << "Enter a : ";
             cin >> a;

             cout << "Enter b : ";
             cin >> b;
     }

     void getdata()
     {
        cout << "a : " << a;
        cout << "b : " << b;
     }

      Compare operator < (int b)
     {
           int temp;

           if(a<b)
           {
                 temp = b;
           }
           else{
                 temp = a;
           }
     }

};