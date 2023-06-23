#include <bits/stdc++.h>
using namespace std;

void increment(int *n1)
{
    (*n1)++;
    return;
}

int main()
{
    int i;

    increment(&i);

    cout << i << endl;

    return 0;
}