#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    string s;
    int dist[101][101];
    int board[101][101];

    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (int j = 0; j < M; j++)
        {
            board[i][j] = s[j] - '0';
        }
    }
    fill(&dist[0][0], &dist[0][0] + 101 * 101, -1);

    queue<pair<int, int>> q;
    q.push({0, 0});
    dist[0][0] = 1;
    int ans = 0;

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;
            if (board[nx][ny] == 0 || dist[nx][ny] != -1)
                continue;

            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            q.push({nx, ny});
        }
    }
    cout << dist[N - 1][M - 1];
}
