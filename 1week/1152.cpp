#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int cnt = 0;
    getline(cin, s);

    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cnt++;
    }
    cout << cnt;
}

// space area can use command 'stringstream'
// more often than not use cin >> s for get wordline
// But if we use 'stringstream' command not consider to space area.
// only control words in wordline