/*
Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes

Q.2 Write a Program to perform four different numbers sum by inheriting constructors in hybrid inheritance.
*/
#include<iostream>
using namespace std;

class RBI{
	
	protected :
		double rbi_roi = 6.50;
		
    public : 
		
	void getdata()
	{
		cout << "RBI Rate of Interest : " << rbi_roi <<"%"<< endl;
	}
		
		
};

class SBI : public RBI{
	
	protected : 
	
	double sbi_roi = rbi_roi + 2;
	
	public :
	
	void getdata()
	{
		cout << "SBI Rate of Interest : " << sbi_roi <<"%"<<endl ;
	}
	
};


class BOB : public RBI{
	
	protected :
	
	double bob_roi = rbi_roi + 0.75;
	
	public :
		
	void getdata()
	{
		cout << "BOB Rate of Interest : " << bob_roi << "%"<< endl;
	}
	
	
};

class icici : public RBI{
	
	protected :
	
	double icici_roi = rbi_roi + 0.7 ;
	
	public :
	
	void getdata()
	{
		cout << "ICICI Rate of Interest : " << icici_roi <<"%" <<endl;
	}
	
	
};




/*
Write a Program to perform four different numbers’ sum by inheriting constructors in hybrid inheritance.
pattern : 

          a
		 / \
		b   c
	      d	
// C++ program to implement
// constructor in multiple 
// inheritance
#include<iostream>
using namespace std;
class A1
{
public:
A1()
{
	cout << "Constructor of the base class A1 \n";
}

};

class A2
{
public:
A2()
{
	cout << "Constructor of the base class A2 \n";
}

};

class S: public A1, virtual A2
{
public:
S(): A1(), A2()
{
	cout << "Constructor of the derived class S \n";
}
};

// Driver code
int main()
{
S obj;
return 0;
}

*/

class A
{
    protected :
	int a;

	public :
	
	void setdata()
	{
		cout << "Enter a : ";
		cin >> a;
	}
	void getdata()
	{
		cout << "A : " <<a;
	}
};

class B : public A
{
    protected :
	int b;

	public :
	
	void setdata1()
	{
		cout << "Enter B : ";
		cin >> b;
	}
	void getdata1()
	{
		cout << "B : " << b;
	}
		

};

class C : public A
{
    protected :
	int c;

	public :
	
	void setdata2()
	{
		cout << "Enter c : ";
		cin >> c;
	}
	void getdata2()
	{
		cout << "c : " <<c;
	}

};

class D : public B , C
{
    protected :
	int d;
	int sum = 0;

	public :
	
     void setdata3() 
	{
        cout << "Enter d : ";
        cin >> d;
    }

    void getdata3() {
  
        cout << "d : " << d << endl;
    }

	void Sum()
	{
		    sum = B::a + b + C::a + d; // Specify the base class for 'a'
            cout << "sum : " << sum;

	}

};




