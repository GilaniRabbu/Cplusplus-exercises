// 2. Write a C++ program to check whether a given number is even or odd.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Type a number ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is an even integer";
    }
    else
    {
        cout << num << " is an odd integer";
    }
}