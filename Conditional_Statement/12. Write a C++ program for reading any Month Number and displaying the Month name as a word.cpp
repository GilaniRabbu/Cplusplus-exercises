// 12. Write a C++ program for reading any Month Number and displaying the Month name as a word.

#include <iostream>
using namespace std;

int main()
{
    int monthNumber;

    cout << "Enter a month number (1-12): ";
    cin >> monthNumber;

    // Determine and display the month name based on the month number
    switch (monthNumber)
    {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "June" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
        break;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "October" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "December" << endl;
        break;
    default:
        cout << "Invalid month number! Please enter a number between 1 and 12." << endl;
        break;
    }

    return 0;
}