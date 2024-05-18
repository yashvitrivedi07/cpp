#include"class.cpp"

int main()
{
	int n , i;
	
	cout << "Enter no. of employee : ";
	cin >> n;
	
	employee e[n];
	
	for(i=0; i<n; i++)
	{
		e[i].set_data();
		
	}
	for(i=0; i<n; i++)
	{
		e[i].get_data();
		
	}
	
	return 0;
}
