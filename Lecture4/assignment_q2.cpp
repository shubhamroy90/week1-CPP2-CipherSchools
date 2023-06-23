#include <bits/stdc++.h>
using namespace std;

void grade(int marks)
{
    if (100 >= marks && marks > 90)
    {
        cout << "AA" << endl;
    }
    else if (90 >= marks && marks > 80)
    {
        cout << "AB" << endl;
    }
    else if (80 >= marks && marks > 70)
    {
        cout << "BB" << endl;
    }
    else if (70 >= marks && marks > 60)
    {
        cout << "BC" << endl;
    }
    else if (60 >= marks && marks > 50)
    {
        cout << "cD" << endl;
    }
    else if (50 >= marks && marks > 40)
    {
        cout << "DD" << endl;
    }
    else
    {
        cout << "Failed" << endl;
    }
}

int main()
{
    int marks;

    cout << "Enter your marks out of 100: ";
    cin >> marks;

    grade(marks);

    return 0;
}