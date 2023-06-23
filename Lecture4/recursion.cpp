#include <bits/stdc++.h>
using namespace std;

// int power(int base, int pow)
// {
//     int num = 1;

//     for (int i = 0; i < pow; i++)
//     {
//         num *= base;
//     }

//     return num;
// }

int power(int base, int pow)
{
    if (pow == 0)
        return 1;
    return base * power(base, pow - 1);
}

int main()
{
    cout << power(2, 3);

    return 0;
}