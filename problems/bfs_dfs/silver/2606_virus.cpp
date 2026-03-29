#include <bits/stdc++.h>

using namespace std;

vector<int> CP[101];
bool visited[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    int ans = 0;

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        CP[a].push_back(b);
        CP[b].push_back(a);
    }
    queue<int> q;

    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (int next : CP[cur])
        {
            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
                ans++;
            }
        }
    }
    cout << ans << "\n";
}