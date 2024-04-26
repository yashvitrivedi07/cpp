/*
Q.1 Write a Program to create a class to read and add two distances.
For example,
Input:
input1 => feet: 8, inch: 16
input2 => feet: 4, inch: 14

Output:
14 feet 6 inch

*/
#include <iostream>
using namespace std;

int main()
{

    int feet, inch, feet1, inch1;
    int f, i1;
    double i;

    cout << "enter feet : ";
    cin >> feet;
    cout << "enter inch : ";
    cin >> inch;

    cout << "enter feet1 : ";
    cin >> feet1;
    cout << "enter inch1 : ";
    cin >> inch1;

    f = feet + feet1;
    i = inch + inch1;

    i1 = (i * 1) / 12;
    i = (i * 1) / 12;

    f = f + i1;

    i = i - i1;
    i = i * 12;

    cout << "feet and inch : ---" << endl
         << f << " : " << i;

    return 0;
}