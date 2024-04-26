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

#include "class.cpp"
 int main()
 {

     int size = Hotel::count();

     Hotel h[size];

     for(int i=0; i<size; i++)
     {
        h[i].setdata();
     }
     for(int i=0; i<size; i++ )
     {
        h[i].getdata();
     }

 }