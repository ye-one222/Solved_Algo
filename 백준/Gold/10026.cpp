#include <iostream>
#include <queue>
using namespace std;

#define MAX 100
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
char board[MAX][MAX];
bool vis[MAX][MAX];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> board[i][j];
		}
	}
	
	int cntOfNor = 0;
	int cntOfSak = 0;

	for (int j = 0; j < N; j++) {
		for (int k = 0; k < N; k++) {
			queue<pair<int, int>> Q;
			if (!vis[j][k]) {
				vis[j][k] = 1;
				Q.push({ j,k });
			}
			else {
				continue;
			}
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				for (int i = 0; i < 4; i++) {
					int nx = cur.first + dx[i];
					int ny = cur.second + dy[i];
					if (nx < 0 || nx >= N || ny < 0 || ny >= N)continue;
					if (vis[nx][ny])continue;
					if (board[nx][ny] == board[cur.first][cur.second]) {
						vis[nx][ny] = 1;
						Q.push({ nx,ny });
					}
				}
			}
			cntOfNor++;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			vis[i][j] = 0;
			if (board[i][j] == 'G')
				board[i][j] = 'R';
		}
	}

	for (int j = 0; j < N; j++) {
		for (int k = 0; k < N; k++) {
			queue<pair<int, int>> Q;
			if (!vis[j][k]) {
				vis[j][k] = 1;
				Q.push({ j,k });
			}
			else {
				continue;
			}
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				for (int i = 0; i < 4; i++) {
					int nx = cur.first + dx[i];
					int ny = cur.second + dy[i];
					if (nx < 0 || nx >= N || ny < 0 || ny >= N)continue;
					if (vis[nx][ny])continue;
					if (board[nx][ny] == board[cur.first][cur.second]) {
						vis[nx][ny] = 1;
						Q.push({ nx,ny });
					}
				}
			}
			cntOfSak++;
		}
	}
	cout << cntOfNor << " " << cntOfSak;
}