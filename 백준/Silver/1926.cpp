#include <iostream>
#include <queue>
using namespace std;
#define MAX 500
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int board[MAX][MAX];
bool vis[MAX][MAX];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n; //세로
	cin >> m; //가로
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	int cnt = 0;
	int maxScale = 0;

	queue<pair<int, int> > Q;

	for (int a = 0; a < n; a++) {
		for (int b = 0; b < m; b++) {
			int scale = 0;
			if (board[a][b] == 0 || vis[a][b] == 1) continue;
			vis[a][b] = 1;
			Q.push({ a,b });
			scale++;
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				for (int i = 0; i < 4; i++) {
					int nx = cur.first + dx[i];
					int ny = cur.second + dy[i];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
					if (vis[nx][ny] || board[nx][ny] != 1)continue;
					vis[nx][ny] = 1;
					Q.push({ nx,ny });
					scale++;
				}
			}
			cnt++;
			if (scale > maxScale) maxScale = scale;
		}
	}
	cout << cnt << endl;
	cout << maxScale << endl;
}