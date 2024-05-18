#include"class.cpp"

int main()
{
	Shape *s[2];
	
	Circle c;
	rectangle r;
	
	s[0] =  &c;
    s[1] =  &r;

    for (int i = 0; i < 2; ++i)
    {
        s[i]->Set_Data();
        s[i]->set_area();
        s[i]->display();
    }

   
	
	
	return 0;
}
