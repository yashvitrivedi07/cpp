#include"class.cpp"
int main()
{
	

    Circle c;
    rectangle r;
    char n;
    
    cout << "Enter R to get Area of RECTANGLE : " << endl;
    cout << "Ebter C to get area of TRIANGLE : " << endl;
    cout << "Enter area : ";
    cin >>  n;
    
    if(n == 'r')
    {
    	 r.Set_Data();
         r.set_area();
         r.getColorAndArea();
	}
	else{
		c.Set_Data();
        c.set_area();
        c.getColorAndArea();
	}

    
    

    
   

 
	
	
	
	
	
	
	return 0;
}
