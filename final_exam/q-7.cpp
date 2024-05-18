#include"class.cpp"
int main()
{

    Dog dog;
    Bird bird;
    int i;

    dog.sound();
    dog.move();
    dog.get();

    bird.sound();
    bird.move();
    bird.get();
    
    Animal *animal[2];
    
    animal[0] = &dog;
    animal[1] = &bird;
    
    for(i=0 ; i<2 ; i++)
    {
    	cout << endl;
		animal[i]->move();
    	animal[i]->sound();
    	
	}

	return 0;
}
