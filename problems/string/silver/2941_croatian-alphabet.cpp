#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int cnt = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        cnt++;

        if (i + 1 < n)
        {
            if (s[i] == 'c')
            {
                if (s[i + 1] == '=' || s[i + 1] == '-')
                    i++;
            }
            else if (s[i] == 'd')
            {
                if (s[i + 1] == '-')
                    i++;
                else if (i + 2 < n && s[i + 1] == 'z' && s[i + 2] == '=')
                {
                    i += 2;
                }
            }
            else if ((s[i] == 'l' || s[i] == 'n') && s[i + 1] == 'j')
            {
                i++;
            }
            else if ((s[i] == 's' || s[i] == 'z') && s[i + 1] == '=')
            {
                i++;
            }
        }
    }

    cout << cnt;
}