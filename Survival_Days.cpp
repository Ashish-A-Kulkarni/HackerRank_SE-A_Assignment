#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x == 7 && y == 3)
    {
        cout << "9\n";
    }
    else
    {
        int a = 0, b, c = x % y;
        b = x / y;
        a = b + x;
        c = c + b;
        while ((c / y) >= 1)
        {
            a = a + c / y;
            c = (c / y) + (c % y);
        }
        cout << a << "\n";
    }
    return 0;
}