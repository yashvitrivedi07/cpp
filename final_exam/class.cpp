#include<iostream>
using namespace std;

class Rectangle{

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

class employee{

private :

string name , designation;
int salary;

public : 

void set_data()
{
    cout <<endl<< "Enter employee name : ";
    cin >> name;

    cout << "Enter employee Designation : ";
    cin >> designation;

    cout << "Enter employee salary : ";
    cin >> salary;
    
}

void get_data()
{
	cout << "NAME\tDESIGNATION\tSALARY" << endl <<endl;
	cout << name <<"\t";
	cout << designation <<"\t";
	cout << salary <<"\t"<<endl;
	
}
};


//Q-3



class Shape
{
    protected :
        string color;
        double area ;

    
    public:
        void Set_Data()
        {
            cout <<endl << "Enter color: ";
            cin >> color;
            
        }
        
        void setArea(double a){
        	area = a;
		}

        void getColorAndArea()
        {
            cout << "Color: " << color << endl;
            cout << "Area: " << area << endl;
        }

        virtual void set_area() = 0; 
        virtual void display()  = 0;
};

class Circle : public Shape
{
    private:
        double radius;
    
    public:
        void set_area() 
        {
            cout << "Enter radius: ";
            cin >> radius;
            double area = 3.14 * radius * radius;
            setArea(area);
            cout << "Area of circle: " << area << endl;
        }
        
        void display(){
        	cout << endl <<endl<<"SHAPE : Cirlce" <<endl;
        	cout << "Color = " << color << endl;
        	cout << "Formula : pi * radius * radius"<<endl;
        	cout << "Radius : " << radius << endl;
        	cout << "AREA of Circle : " <<area;
        	
		}
};

class rectangle : public Shape
{
    private:
        double width, length;
    
    public:
        void set_area() 
        {
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            double area = length * width;
            setArea(area);
            cout << "Area of rectangle: " << area << endl;
        }
        
        void display(){
        	cout << endl <<endl <<"SHAPE : Rectangle" <<endl;
        	cout << "Color = " << color << endl;
        	cout << "Formula : Length * Width"<<endl;
        	cout << "Length : " << length << endl << "Width : " << width << endl; 
        	cout << "AREA of Rectangle : " <<area;
        	
		}
};





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



  


class Employee
{
	private:
		
    int a;

public:
    void setData()
    {
        cout << "Enter Eployee salary: ";
        cin >> a;
    }
    void getData() 
	{ 
	      cout << "total salary : " << a << endl;
	 }

   
    Employee operator+(Employee e2)
    {
        Employee tmp;
        tmp.a = a + e2.a;
        return tmp;
    }

};

//Q-7

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    
    virtual void sound() = 0;
    virtual void move() = 0;
};

class Dog : public Animal
{
private:
    string Sound;
    string Move;

public:
    
    void sound() 
    {
        cout << "Enter dog's sound: ";
        cin >> Sound;
    }

    void move() override
    {
        cout << "Enter dog's move: ";
        cin >> Move;
    }

    void get()
    {
        cout << "DOG's sound: " << Sound << endl << "Dog's move: " << Move << endl;
    }
};

class Bird : public Animal
{
private:
    string Sound1;
    string Move1;

public:
   
    void sound() override
    {
        cout << "Enter bird's sound: ";
        cin >> Sound1;
    }

    void move() override
    {
        cout << "Enter bird's move: ";
        cin >> Move1;
    }

    void get()
    {
        cout << "BIRD's sound: " << Sound1 << endl << "Bird's move: " << Move1 << endl;
    }
};





