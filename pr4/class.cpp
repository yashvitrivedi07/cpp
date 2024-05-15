#include<iostream>
using namespace std;

/*
Q.1 Write a Program to create a Message class with a constructor that takes a 
single string with a default value. Create a private member of the typed string, 
and in the constructor simply assign the argument string to your internal string. 
Create two overloaded member functions called print( ): one that takes no arguments
 and simply prints the message stored in the variable and one that takes a string argument,
  which it prints in addition to the internal message.


*/

class Message{

    private :

    string m = "World !!!";

    public :

        Message(string n){
              
             cout << n << " ";
        }

        void message()
        {
            cout << m << endl;
        }
};

/*
Q.2 Write a Program to add two distances using binary plus (+) operator overloading.

For example,
Input:
input1 => Km: 3, Meter: 1020
input2 => Km: 2, Meter: 2050

Output:
Km: 8, Meter: 70
*/

class Setdata{

      private :

      int km , km1;
      int meter , meter1;

      public :

      Setdata()
      {
            cout <<  "Enter km : ";
            cin >> km;

            cout << "Enter meter : ";
            cin >> meter;

            cout <<  "Enter km : ";
            cin >> km1;

            cout << "Enter meter : ";
            cin >> meter1;



      }

      void add()
      {
            km = km+ km1;
            km1 = km+(meter + meter1)/1000;
            
            meter = (meter + meter1) % 1000;

            cout << " Km : meter " <<endl << " "<<km1 << " : " << meter;
      }
};