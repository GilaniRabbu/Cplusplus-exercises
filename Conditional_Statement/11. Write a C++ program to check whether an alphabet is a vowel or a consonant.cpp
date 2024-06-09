// 11. Write a C++ program to check whether an alphabet is a vowel or a consonant.

#include <iostream>
using namespace std;

int main()
{
    char character;

    cout << "Enter an alphabet: ";
    cin >> character;

    // Convert the character to lowercase to simplify comparison
    character = tolower(character);

    // Check if the character is an alphabet
    if (!isalpha(character))
    {
        cout << "The input is not an alphabet." << endl;
    }
    else
    {
        // Check if the character is a vowel
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
        {
            cout << "The alphabet is a vowel." << endl;
        }
        else
        {
            cout << "The alphabet is a consonant." << endl;
        }
    }

    return 0;
}