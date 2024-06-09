// Calculator

#include <iostream>
using namespace std;

int main()
{
    int operation, num1, num2, add, sub;

    while (1)
    {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "Type 0 for exit" << endl;
        cout << "Enter operation: ";

        cin >> operation;

        if (operation == 1)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            add = num1 + num2;
            cout << "Sum is: " << add << endl;
        }
        else if (operation == 2)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            sub = num1 - num2;
            cout << "Sum is: " << sub << endl;
        }
        else if (operation == 0)
        {
            break;
        }
    }
}