#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *b = &a;
    cout << b << endl;
    cout << &a << endl;
    *b=100;
    cout << a << endl;
    return 0;
}