#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;

    cin >> a >> b;
    int rva[3];
    int rvb[3];
    for (int i = 0; i < 3; i++)
    {
        rva[i] = (a % 10);
        a /= 10;
        rvb[i] = (b % 10);
        b /= 10;
    }
    int aa, bb;
    aa = (rva[0] * 100) + (rva[1] * 10) + rva[2];
    bb = (rvb[0] * 100) + (rvb[1] * 10) + rvb[2];

    int result;
    if (aa > bb)
        result = aa;
    else
        result = bb;

    cout << result;
}