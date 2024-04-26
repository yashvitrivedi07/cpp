/*
Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
For example,
Input:
Enter the first number: 2020

Enter the second number: 2040

Output:
The array is: 2020, 2024, 2028, 2032, 2036, 2040
*/

#include<iostream>
using namespace std;

int main()
{
    int year1 , year2;
    
    cout << "Enter the first number : ";
    cin >> year1;

    cout << "Enter the second number : ";
    cin >> year2;

    cout << endl << "Leap year :--" <<endl;

    while (year1 <= year2)
    {
        if(year1 % 4 == 0)
        {
            cout << year1 << "  ";
        }
        year1++;
    }
}