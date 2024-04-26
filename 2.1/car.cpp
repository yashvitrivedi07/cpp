#include"class.cpp"

int main()
{
    int size;
    cout << "no of car : ";
    cin >> size;

    Car c[size];

   for(int i=0; i<size; i++) 
   {
      c[i].Setcardata();
   }
    
   for(int i=0; i<size; i++)
   {
     c[i].Getcardata();
   }
    return 0;

}