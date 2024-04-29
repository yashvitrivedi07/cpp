/*
Q.2 Write a Program to make Supermarket Billing System.
Requirements:
(A) User Input:
- Item Number
- Item Name
- Quantity
- Price
- Discount
(B) Verify User Id And Password
(C) Display Records:
- All Records
- By Searching Item Number
*/

#include<iostream>
using namespace std;

class SuperMarket{
    
    private :

    int item_number;
    string item_name;
    int quantity;
    double price;
    double discount;
    int id;
    string password;
    static int id1;
    static string password1;

    public :


    void setdata()
    {
        cout <<endl << endl << "Enter Item Number : ";
        cin >> item_number;

        cout  << "Enter Item Name : ";
        cin >> item_name;

        cout  << "Enter item Quantity : ";
        cin >> quantity;

        cout << "Enter item Price : ";
        cin >> price;

        cout  << "Enter item Discount : ";
        cin >> discount; 
    }

    int getnumber()
    {
           cout << "id : " << item_number <<endl;
           return item_number;
    }

    string getname()
    {
           cout << "name : " << item_name  <<endl;
           return item_name;
    }

    int getquantity() 
    {
           cout << "quantity : " << quantity  <<endl;
           return quantity;
    }

    int getprice()
    {
           cout << "price : " << price <<endl;
           return price;
    }

    int getdiscount()
    {
           cout << "discount : " << discount <<endl;
           return discount;
    }

    int setid()
    {
           cout  <<endl << "Enter id : ";
           cin >> id;
           return id;
    }

    string setpass()
    {
           cout  <<endl << "Enter password : ";
           cin >> password;
           return password;
    }

    int id2()
    {
       return id1;
    }

    string password2()
    {
       return password1;
    }

};

string SuperMarket :: password1 = "y1234";
int SuperMarket :: id1 = 1234;