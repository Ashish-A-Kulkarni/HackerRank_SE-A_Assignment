#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, m, r[3], c[3], ct = 0;
    cin >> n >> m;
    char a[100][100];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '*')
            {
                r[ct] = i;
                c[ct] = j;
                ct++;
            }
        }
    }
    if (r[0] != r[1] && r[0] != r[2])
        cout << r[0] << " ";
    else if (r[1] != r[0] && r[1] != r[2])
        cout << r[1] << " ";
    else
        cout << r[2] << " ";

    if (c[0] != c[1] && c[0] != c[2])
        cout << c[0];
    else if (c[1] != c[0] && c[1] != c[2])
        cout << c[1];
    else
        cout << c[2];

    return 0;
}