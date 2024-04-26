/*
/*
     Q.2 Write a Program to read time in seconds and convert it into time in (HH:MM:SS) format.
For example,
Input:
Enter seconds: 4520

Output:
1:15:20


rem 
*/



#include<iostream>
using namespace std;

int main()
{

    double min1,hour1,sec,sec1;
    int hour,min,fhour;

    cout << "enter second : ";
    cin >> sec;

    min = sec / 60;
    min1 = sec/ 60;

 cout << "min : " << min << endl;
 cout << "min1 : " << min1 << endl;

    hour = min/60;
    hour1 = min1/60;

    cout << "hour : " <<hour << endl;
    cout << "hour1 : " <<hour1 << endl;

 hour1 = hour1-hour;
 fhour = hour1*60;


min1 = (min1-min)*60;


  
cout << "hh : mm : ss ---"<<endl  <<hour << ": " <<fhour <<": " <<min1 <<endl;
    
}

/*
#include<iostream>
using namespace std;

int main()
{
    int second , hour, min;

    cout << "enter seconds : ";
    cin >> second;

    hour = second / 3600;
    min = (second - 3600) / 60;
    second = second % 60;

    cout << "HH : MM : SS " <<endl;
    cout << hour << " : " << min << " : " <<second  ;
}*/