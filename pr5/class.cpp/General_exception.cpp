/*
   Q.1 Write a Program to create a class that illustrates the concept of 
   handling all types of exceptions using general exceptions.


*/

#include<iostream>>
using namespace std;

int main()
{
    char password[40];
    int count = 0;

    cout << "Enter your password : ";
    cin >> password;

    for(int i=0; password[i]!='\0'; i++)
    {
        if((password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= '0' && password[i] <= '9'))
        {
            count ++;
        }
    }

    try{
        if(count == 0)
        {
            throw password;
        }
        else{
            cout << "Password created----" <<endl;
        }
    }

    catch(...)
    {
        cout << "general exceptions";
    }
    return 0;
}