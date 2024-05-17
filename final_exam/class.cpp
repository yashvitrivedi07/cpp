#include<iostream>
using namespace std;

/*class Rectangle{

    private :
    float length , width;

    public:

    void setdata()
    {
        cout << "Enter length : ";
        cin >> length;

        cout << "Enter width : ";
        cin >> width;
    }

    void getdata()
    {
        cout << "Length : " << length << endl << "width : " << width << endl;
    }

    void area()
    {
        cout << "Area of rectangle : " << length*width;
    }

};

//Q-2

class Employee{

private :

string name , designation;
int salary;

public : 

void setdata()
{
    cout <<endl<< "Enter employee name : ";
    cin >> name;

    cout << "Enter employee Designation : ";
    cin >> designation;

    cout << "Enter employee salary : ";
    cin >> salary;
    
}

void getdata()
{
	cout << "NAME\tDESIGNATION\tSALARY" << endl <<endl;
	cout << name <<"\t";
	cout << designation <<"\t\t";
	cout << salary <<"\t"<<endl;
	
}
};


//Q-3

/*class Shape
{
	private :
		
		string color;
		float area;
		
	public:
		
		void setdata()
		{
			cout << "Enter color : ";
			cin >> color;
			
			cout << "Enter area : ";
			cin >> area;
		}
		
	
};

class Circle : Shape{

	
	private:
		float radius;
		
	public :
		
	void area_circle()
	{
		cout << "Enter radius : ";
		cin >> radius;
		
		radius = 3.14 * radius* radius;
		
		cout << "AREA OF CIRCLE : " << radius;
		
		
	}
	
};
class Rectangle : Shape{
	
	private :
		
		float length , width;
		
	
	public :
		
		void area_rectangle()
		{
			cout << "Enter length : ";
			cin >> length;
			
			cout << "Enter width : ";
			cin >> width;
			
			 cout << "Area of rectangle : " << length*width;
		}
		
};*/

//Q-6

class Calculator{
	
	private:
		
		int choice , a, b;
		
	public :
	
	void set_data()
	{
		
		
		cout << "Enter 1 for addition : " << endl;
		cout << "Enter 2 for Subtraction : " << endl;
		cout << "Enter 3 for Multiplication: " << endl;
		cout << "Enter 4 for Division : " << endl;
		cout << "Enter 5 for Modues : " << endl;
		cout << "Enter your choice : ";
		cin >> choice;
		
		cout << "Enter a : ";
		cin >> a;
		cout << "Enter b : ";
		cin >> b;
		
		switch(choice)
		{
			case 1:
				
				cout<< "Addition : " <<a << " + " << b << " = " << a+b;
				break;
				
			case 2:
				
				cout<< "Subtraction : " <<a << " - " << b << " = " << a-b;
				break;
				
			case 3:
				
				cout<< "multiplication : " <<a << " x " << b << " = " << a*b;
				break;
				
			case 4:
				
				try
				{
					if(b == 0)
					{
						throw 1;
					}
					else{
						cout<< "Division : " <<a << " / " << b << " = " << a/b;
					}
				}
				catch(int b)
				{
					cout << "CAN'T DEVIDE BY ZERO !!!";
				}
				break;
				
			case 5:
				
				cout<< "modues : " <<a << " % " << b << " = " << a%b;
				break;
		}
		
	}
};
