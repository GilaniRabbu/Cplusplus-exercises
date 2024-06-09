// 7. Write a C++ program to determine eligibility for admission to a professional course based on the following criteria:

#include <iostream>
using namespace std;

int main()
{
    int math, phy, chem;

    cout << "Enter marks of math, phy and chem ";
    cin >> math >> phy >> chem;

    int sum = math + phy + chem;

    if ((math >= 65 && phy >= 55 && chem >= 50) && sum >= 190 || math + phy >= 140)
    {
        cout << "The candidate is eligible for admission.";
    }
    else
    {
        cout << "The candidate is not eligible for admission.";
    }
}