// 3. Write a C++ program to check whether a given number is positive or negative.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Type a number ";
    cin >> num;

    if (num > 0)
    {
        cout << num << " is a Positive Number";
    }
    else
    {
        cout << num << " is a Negative Number";
    }
}