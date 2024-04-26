#include"class.cpp"

int main()
{
    int size;
    cout << "no of employee : ";
    cin >> size;

    Employee e[size];

   for(int i=0; i<size; i++) 
   {
      e[i].Setemployeedata();
   }
    
   for(int i=0; i<size; i++)
   {
     e[i].Getemployeedata();
   }
    return 0;
}