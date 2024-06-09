// 1. Write a C++ program to accept two integers and check whether they are equal or not.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Type a number ";
    cin >> num1;

    cout << "Type another number ";
    cin >> num2;

    if (num1 == num2)
    {
        cout << "Number1 and Number2 are equal";
    }
    else
    {
        cout << "Are not equal";
    }
}