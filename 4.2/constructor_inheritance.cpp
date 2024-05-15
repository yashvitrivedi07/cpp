#include "class.cpp"


    int main() {
    D obj;
    
    obj.B::setdata();
    obj.B::setdata1();
     // Qualifying setdata2() with the base class C
    obj.setdata3();

    obj.B::getdata();
    obj.B::getdata1();
   
    obj.getdata3();
    
    obj.Sum();


    return 0;
    }

