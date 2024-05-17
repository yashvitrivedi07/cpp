#include"class.cpp"

int main()
{
	int n , i;
	
	cout << "Enter no. of employee : ";
	cin >> n;
	
	Employee e[n];
	
	for(i=0; i<n; i++)
	{
		e[i].setdata();
		
	}
	for(i=0; i<n; i++)
	{
		e[i].getdata();
		
	}
	
	return 0;
}
