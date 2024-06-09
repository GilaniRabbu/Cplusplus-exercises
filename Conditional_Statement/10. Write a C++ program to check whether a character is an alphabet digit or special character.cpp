// 10. Write a C++ program to check whether a character is an alphabet, digit or special character.

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char character;

    cout << "Enter a character: ";
    cin >> character;

    if (isalpha(character))
    {
        cout << "This is an alphabet." << endl;
    }
    else if (isdigit(character))
    {
        cout << "This is a digit." << endl;
    }
    else
    {
        cout << "This is a special character." << endl;
    }

    return 0;
}