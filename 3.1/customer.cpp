#include "class.cpp"
int main ()
{
    
    int n,i;

    cout << "enter no of customers : ";
    cin >> n;

     Customer c[n];

     for (i=0; i<n; i++)
     {
         c[i].setcusdata();
         c[i].cust_validity();
         c[i].cust_telecom();
         
     }
    
    for(i=0; i<n; i++)
    {
         c[i].getcustdata();
         c[i].cust_validity();
         c[i].getcust_telecom();
         
    }
    
}