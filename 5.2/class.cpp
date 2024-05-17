#include<iostream>
using namespace std;
/*
Q.1 Write a Program to overload < operator to find which object contains a higher 
value from given 2 numbers.
*/

#include<iostream>
using namespace std;

class Number{
    protected:
        int a , b;

      public :

        void setdata(){
            cout << "Enter Number : "; cin >> a;
            cout << "Enter second Number : ";
            cin >> b;
        }
        Number operator< (int b)
        {
            if (a < b)
            {
                return a;
            }
            else{
                return b;
            }
        }
};

int main()
{
    Number n1, n2;
    n1.setdata();
    n2.setdata();
    if(n1 < n2){
        cout << " n2 is Maximum value...";
    }
    else{
        cout << " n1 is Maximum value...";
    }
    return 0;
}

