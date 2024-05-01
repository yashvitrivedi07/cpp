/*
Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes

Q.2 Write a Program to perform four different numbers’ sum by inheriting constructors in hybrid inheritance.
*/
#include<iostream>
using namespace std;

class RBI{
	
	protected :
		double rbi_roi = 6.50;
		
    public : 
		
	getdata()
	{
		cout << "RBI Rate of Interest : " << rbi_roi <<"%"<< endl;
	}
		
		
};

class SBI : public RBI{
	
	protected : 
	
	double sbi_roi = rbi_roi + 2;
	
	public :
	
	getdata()
	{
		cout << "SBI Rate of Interest : " << sbi_roi <<"%"<<endl ;
	}
	
};


class BOB : public RBI{
	
	protected :
	
	double bob_roi = rbi_roi + 0.75;
	
	public :
		
	getdata()
	{
		cout << "BOB Rate of Interest : " << bob_roi << "%"<< endl;
	}
	
	
};

class icici : public RBI{
	
	protected :
	
	double icici_roi = rbi_roi + 0.7 ;
	
	public :
	
	getdata()
	{
		cout << "ICICI Rate of Interest : " << icici_roi <<"%" <<endl;
	}
	
	
};



