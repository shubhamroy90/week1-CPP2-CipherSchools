#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 10) + sumOfDigits(num / 10);
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = sumOfDigits(num);

    cout << "Sum of digits: " << result << endl;

    return 0;
}
