#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cout << "Start ..." << endl;

    cout << "Enter first number : ";
    cin >>  a;

    cout << "Enter second number : ";
    cin >> b;

    cout << "Start ..." << endl;
    try{

        if(b==0)
        {
            throw 1;
        }
        else{
            cout << "Answer : " << a/b << endl;
        }
    }

    catch(int b)
    {
        cout << "Can't Devide by ZERO...." <<endl;
    }

    cout << "End ...";


}