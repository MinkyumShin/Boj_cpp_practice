#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    while (N--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        int score = 0;
        for (auto c : s)
        {
            if (c == 'O')
            {
                cnt++;
                score += cnt;
            }
            else if (c == 'X')
                cnt = 0;
        }
        cout << score << "\n";
    }
}