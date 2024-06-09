// 4. Write a C++ program to find whether a given year is a leap year or not.

#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year ";
    cin >> year;

    if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0)
    {
        cout << year << " is a leap year";
    }
    else
    {
        cout << "Not a leap year";
    }
}