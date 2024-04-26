/*
Q.1 Write a Program to get and display N numbers of Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity
*/

#include<iostream>
using namespace std;

class Hotel{

private:

int hotel_id;
int  hotel_establish_year;
string hotel_name;
static string hotel_type;
static string hotel_rating ;
static string hotel_location ;
string hotel_staff_quantity;
string hotel_room_quantity;


public : 

void setdata()
{
    cout <<endl << "enter hotel id : ";
    cin >> hotel_id;

    cout << "enter hotel name : ";
    cin >> hotel_name;

    cout << "enter hotel year : ";
    cin >> hotel_establish_year;

    cout << "enter hotel staff quality : ";
    cin >> hotel_staff_quantity;

    cout << "enter hotel room quality : ";
    cin >> hotel_room_quantity;
}

void getdata()
{
     cout <<endl <<endl << "hotel id : " << hotel_id <<endl;
     cout << "hotel name : " << hotel_name <<endl ;
     cout << "hotel establish year : " << hotel_establish_year <<endl ;
     cout << "hotel staff quality : " << hotel_staff_quantity <<endl ;
     cout << "hotel room quality : " << hotel_room_quantity <<endl ;
     cout << "hotel type : " << hotel_type <<endl ;
     cout << "hotel location : " << hotel_location <<endl ;
     cout << "hotel rating : " << hotel_rating <<endl ;
}

static int count()
 {
    int i,n;
    cout << "enter no of hotels : ";
    cin >> n;
    return  n;
}

};

string Hotel :: hotel_type = " hotel " ;
string Hotel :: hotel_location = "surat";
string Hotel :: hotel_rating = "5 star";