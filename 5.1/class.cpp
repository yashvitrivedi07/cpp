#include <iostream>
using namespace std;

/*
Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations 
by implementing method overloading using 2 classes.
- use only one method named calculate() in the child class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition

*/

class Arithmatic
{
     protected:
     int a1 , a2 , a3 , a4 , a5;

     public :

int arithmatic(int a1 , int a2 )
{
     cout << "division : " << a1 / a2;    
}

int arithmatic(int a1 , int a2 , int a3 )
{
     cout << "subtraction : " << a1 - a2 - a3;
}

int arithmatic(int a1 , int a2 , int a3 , int a4 )
{
     cout << "multiplication : " << a1 * a2 * a3 * a4;

}
int arithmatic(int a1 , int a2 , int a3 , int a4 , int a5)
{
      
      cout << "addition : " << a1 + a2 + a3 + a4 + a5;
}
     
};

class Arith :public Arithmatic{

      
      protected :
      int n;
      
      public :
      Arith()
      {
          cout << "Enter 1 for perform division : " << endl; 
          cout << "Enter 2 for perform subtraction : " << endl;
          cout << "Enter 3 for perform multiplication : " << endl;
          cout << "Enter 4 for perform addition : " << endl;

          
          cout << "Enter ur choice : ";
          cin >> n;
      }
       
      void c()
      {
            switch (n)
            {

            case 1 :
                
                  cout << "Enter a1 : ";
                  cin >> a1;
     
                  cout << "Enter a2 : ";
                  cin >> a2;

                 arithmatic(a1, a2);
                 break;


            case 2 :
                
                  cout << "Enter a1 : ";
                  cin >> a1;
     
                  cout << "Enter a2 : ";
                  cin >> a2;

                  cout << "Enter a3 : ";
                  cin >> a3;

                  arithmatic(a1 , a2 , a3) ;
                  break;

            case 3 :
                
                  cout << "Enter a1 : ";
                  cin >> a1;
     
                  cout << "Enter a2 : ";
                  cin >> a2;

                  cout << "Enter a3 : ";
                  cin >> a3;

                  cout << "Enter a4 : ";
                  cin >> a4;
                  
                  arithmatic(a1 , a2 , a3 , a4 ) ;
                  break;

            case 4 :
                
                  cout << "Enter a1 : ";
                  cin >> a1;
     
                  cout << "Enter a2 : ";
                  cin >> a2;

                  cout << "Enter a3 : ";
                  cin >> a3;

                  cout << "Enter a4 : ";
                  cin >> a4;

                  cout << "Enter a5 : ";
                  cin >> a5;
                  
                  arithmatic(a1 , a2 , a3 , a4 , a5) ;
                  break;

            defaul : 
                 cout << "invalid input  :";
                 break;
            }
      }
};



/*

Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:-
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- Override getTotalOvers() method in both classes
*/

class Overs
{

    private : 
    
    int over;
   
};

class Test : public Overs
{
public:
    
    void getover(int over)
    {
        if(over == 90)
        {
        
        cout << "---------Test Match------------" << endl <<endl;
        cout << " 90 Overs..." << endl;
        cout << "----------------------------" << endl <<endl;}
    }
};

class T20 : public Overs
{
public:
    
    void getover(int over)
    {
        if(over == 20){
        cout << "---------T-20 Match------------" << endl <<endl;
        cout << " 20 Overs..." << endl;
        cout << "----------------------------" << endl <<endl;}
    }
};

class ODI : public Overs
{
public:
    
    void getover(int over)
    {
        if(over == 50){
        cout << "---------ODI Match------------" << endl <<endl;
        cout << " 50 Overs..." << endl;
        cout << "----------------------------" << endl <<endl;}
    }
};












