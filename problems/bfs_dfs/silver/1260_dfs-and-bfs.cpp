#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
bool visited[1001];

void dfs(int cur)
{
    visited[cur] = true;
    cout << cur << " ";
    for (int next : adj[cur])
    {
        if (!visited[next])
        {
            dfs(next);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, V;
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= N; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(V);
    cout << "\n";

    queue<int> q;

    fill(visited, visited + 1001, false);
    q.push(V);
    visited[V] = true;

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (int next : adj[curr])
        {
            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }
    return 0;
}