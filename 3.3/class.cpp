/*
Q.1 Write a Program to get and display N numbers of Diamond companies information using encapsulation and use of Parameterised Constructor by including below
mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)

Q.2 Write a Program to get and display N numbers of Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like a rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity
*/

#include<iostream>
using namespace std;

class Diamond_company{
int n;

 Diamond_company(int n, int id, string name, string staff_quantity,int revenue, int diamond_import, int diamond_export, string ceo )
{
    comp_id = id;
}

void setdata()
{
    int a[n];

    for(int i=0; i<n; i++)
    {
        cout << "enter company id : ";
        cin >> id;
        


    }

}
};
