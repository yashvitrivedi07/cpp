#include "class.cpp"
int main ()
{
    
    int n,i;

    cout << "enter no of students : ";
    cin >> n;

     Student s[n];

     for (i=0; i<n; i++)
     {
         s[i].setstudentdata();
         s[i]. studentcollege();
         
     }
    
    for(i=0; i<n; i++)
    {
        s[i]. getdata();
         s[i]. getstudentdata();
    }
    
}