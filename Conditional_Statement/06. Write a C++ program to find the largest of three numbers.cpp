// 6. Write a C++ program to find the largest of three numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1 = 30, num2 = 20, num3 = 15;

    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            cout << "The 1st Number is the greatest among three";
        }
        else
        {
            cout << "The 3rd Number is the greatest among three";
        }
    }
    else
    {
        if (num2 >= num3)
        {
            cout << "The 2nd Number is the greatest among three";
        }
        else
        {
            cout << "The 3rd Number is the greatest among three";
        }
    }
}