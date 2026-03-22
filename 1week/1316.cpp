#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int cnt = 0;

    while (N--)
    {
        string s;
        cin >> s;
        int word[26] = {
            0,
        };
        char prev = '\0';
        int result = 1;

        for (auto c : s)
        {
            if (prev != c)
            {
                if (word[c - 'a'] > 0)
                {
                    result = 0;
                    break;
                }
                word[c - 'a']++;
                prev = c;
            }
        }
        cnt += result;
    }
    cout << cnt;
}