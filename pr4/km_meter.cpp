#include"class.cpp"
int main()
{
    
    
  
    Distance d1 , sum;
    d1.setKm();
    d1.setMeter();

    Distance d2;
    d2.setKm();
    d2.setMeter();

    cout << "Input 1: " <<endl;
    d1.getData();

    cout << "Input 2: " <<endl;
    d2.getData();
    

    sum = d1 + d2;

    
    cout << "Output: " <<endl;
    sum.getData();
    
}
