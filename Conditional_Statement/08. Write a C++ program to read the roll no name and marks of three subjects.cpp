// 8. Write a C++ program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.

#include <iostream>
#include <string>

// For setting precision
#include <iomanip>

using namespace std;

int main()
{
    int roll, sub1, sub2, sub3, sum;
    string name, division;
    float per;

    cout << "Input the Name of the Student: ";
    cin >> name;

    cout << "Input the Roll Number of the student: ";
    cin >> roll;

    cout << "Input the marks of three subjects: ";
    cin >> sub1 >> sub2 >> sub3;

    // Calculate total, percentage, and division
    sum = sub1 + sub2 + sub3;
    per = (static_cast<float>(sum) / 300) * 100;
    // per = sum / 3;

    if (per >= 80)
    {
        division = "First";
    }
    else if (per >= 65 && per < 80)
    {
        division = "Second";
    }
    else
    {
        division = "Third";
    }

    // Output results
    cout << "Result:" << endl;
    cout << "Name of Student: " << name << endl;
    cout << "Roll No: " << roll << endl;
    cout << "Marks in First Sub: " << sub1 << endl;
    cout << "Marks in Second Sub: " << sub2 << endl;
    cout << "Marks in Third Sub: " << sub3 << endl;
    cout << "Total Marks = " << sum << endl;
    cout << fixed << setprecision(2); // Set precision for floating-point output
    cout << "Percentage = " << per << "%" << endl;
    cout << "Division = " << division << endl;

    return 0;
}