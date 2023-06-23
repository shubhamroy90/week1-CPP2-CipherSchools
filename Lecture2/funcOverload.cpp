#include <bits/stdc++.h>
using namespace std;

// ================Function Overloading=========================
int maxi(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int maxi(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
            return num1;
        return num3;
    }
    else
    {
        if (num2 > num3)
            return num2;
        return num3;
    }
}

int maxi(int num1, int num2, int num3, int num4)
{
    // int n1 = maxi(num1, num2);
    // int n2 = maxi(num3, num4);
    // return maxi(n1, n2);

    int n1 = maxi(num1, num2, num3);
    return maxi(n1, num4);
}
int main()
{
    cout << maxi(2, 5);
    cout << maxi(2, 5, 3);
    cout << maxi(2, 5, 3, 4);

    return 0;
}