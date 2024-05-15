#include<iostream>
using namespace std;

int main()
{
    int age ,a;
    cout << "start..." <<endl;

    cout << "Enter your age : ";
    cin >> age;

    try{
        if(age<18)
        {
            throw 18;
        }
        else{
            cout << "You can vote ..." <<endl;
        }
    }

    catch(int voting_age)
    {
        a = voting_age-age;
        cout << "You can't vote , You have to wait for " <<  a << " years" <<endl;
    }

    cout << "END ..." <<endl;
}