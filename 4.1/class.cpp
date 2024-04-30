/*
Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
- Class X has the following members: a, b & c attributes in integer data type
- Class Y has the following members: setData() and getData() methods

Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
- Class P has the following members: temperature attribute in float
- Class Q has the following members: toFehrenheit() method
- Class R has the following members: toKelvin() method
*/
#include<iostream>
using namespace std;

class Attributes{
	
	protected :
		
		int a ;
		int b ;
		int c ;
		int sum = 0;
};

class SetGet : public  Attributes{
	 
	 public : 
	 
	 void Setdata()
	 {
	 	cout << "Enter a : ";
	 	cin >> a;
	 	
	 	cout << "Enter b : ";
	 	cin >> b;
	 	
	 	cout << "Enter c : ";
	 	cin >> c;
	 }
	 
	 void Getdata()
	 {
	 	cout << "a : " << a << endl;
	 	cout << "b : " << b << endl;
	 	cout << "c : " << c << endl ;
	 }
	 
	 void Qube()
	 {
	 	a = a*a*a;
	 	b = b*b*b;
	 	c = c*c*c;
	 	
	 	sum = a+b+c;
	 	
	 	cout << "cube : --- " << endl;
	 	cout << "a : " <<a <<endl ;
	 	cout << "b : " <<b <<endl ;
	 	cout << "c : " <<c <<endl ;
	 	
	 	cout << "sum of all three number’s cubes ----" << endl;
	 	cout << "sum = " << sum;
	 	
	 	
	 }
};



class P{
	protected : 
	
	double celsius;
	double fehrenheit;
	double kelvin;
	
	public :
		
	void cel(){	
	cout << "Enter Celsius : ";
	cin >> celsius;
	cout <<"Celsius : " <<celsius << endl;
}
};

class Q : public P{
	public : 
	
	void Fe()
	{
		fehrenheit = (celsius * 9) / 5 ;
		cout << "Fehrenheit : " <<fehrenheit+32 << endl;
	}
};

class R : public Q {
	public : 
	
	void kel()
	{
		kelvin = celsius + 273.15 ;
		cout << "Kelvin : " <<kelvin << endl;
	}
	
};


