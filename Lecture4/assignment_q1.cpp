#include <bits/stdc++.h>
using namespace std;

void eligibleAge(int age)
{
    if (age >= 18)
    {
        cout << "Eligible to vote" << endl;
    }
    else
    {
        cout << "Not eligible to vote" << endl;
    }
}

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    eligibleAge(age);

    return 0;
}