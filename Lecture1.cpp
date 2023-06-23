#include <bits/stdc++.h>
using namespace std;

int sum(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum(num1, num2) << endl;

    return 0;
}