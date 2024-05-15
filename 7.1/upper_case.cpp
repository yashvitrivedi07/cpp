#include<iostream>
using namespace std;
//- a password cannot be validated if it doesn’t contains an uppercase letter


int main()
{
    char a[40];
    int count = 0;

    cout << "start..." << endl;

    cout <<  "Enter password : ";
    cin >> a;

    for(int i=0; a[i]!='\0'; i++)
    {
          if(a[i] >= 'A' && a[i] <= 'Z')
          {
          count ++;
          }
    }
    
    try{
        if(count == 0)
        {
            throw 1;
        }
        else
        {
            cout << "Password Created-----";
        }
    }

    catch(...)
    {
        cout << "it doesn't contains an uppercase letter" << endl;
    }

    cout << "end..." <<endl;

    return 0;

}