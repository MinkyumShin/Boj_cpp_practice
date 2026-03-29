#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> adj[1001];
    bool vis[1001] = {0};

    int N, M;
    cin >> N >> M;

    while (M--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int count = 0;

    for (int i = 1; i <= N; i++)
    {
        if (vis[i])
            continue;
        count++;

        queue<int> q;
        q.push(i);
        vis[i] = 1;
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            for (int next : adj[cur])
            {
                if (vis[next])
                    continue;
                vis[next] = true;
                q.push(next);
            }
        }
    }
    cout << count << "\n";
}