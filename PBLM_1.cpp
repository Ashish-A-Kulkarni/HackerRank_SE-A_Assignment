#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T, i, j;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (i = 0; i < n / 2; i++)
        {
            if (i % 2 == 0)
            {
                for (j = 0; j < n - (i + 1); j++)
                {
                    cout << "%";
                }
                for (j = 0; j < (i + 1); j++)
                {
                    cout << "#";
                }
                cout << "\n";
            }
            else
            {
                for (j = 0; j < (i + 1); j++)
                {
                    cout << "#";
                }
                for (j = 0; j < n - (i + 1); j++)
                {
                    cout << "%";
                }
                cout << "\n";
            }
        }
        for (i = n / 2; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (j = 0; j < i; j++)
                {
                    cout << "%";
                }
                for (j = 0; j < n - i; j++)
                {
                    cout << "#";
                }
                cout << "\n";
            }
            else
            {
                for (j = 0; j < n - i; j++)
                {
                    cout << "#";
                }
                for (j = 0; j < i; j++)
                {
                    cout << "%";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}