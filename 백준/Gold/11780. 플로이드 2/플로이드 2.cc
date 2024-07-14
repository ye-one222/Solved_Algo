#include <iostream>
#include <vector>
#define INF 100000000
using namespace std;

int table[101][101];
int nxt[101][101];
int cnt = 2;
vector<int> path;

int main() {
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			table[i][j] = INF;
		}
	}
	int n, m, a, b, c;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if (table[a][b] > c) {
			table[a][b] = c;
			nxt[a][b] = b;
		}
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == j) {
					table[i][j] = 0;
					continue;
				}
				if (table[i][j] > table[i][k] + table[k][j]) {
					table[i][j] = table[i][k] + table[k][j];
					nxt[i][j] = nxt[i][k];
				}
			}
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (table[i][j] >= INF) {
				cout << 0;
			}
			else {
				cout << table[i][j];
			}
			cout << " ";
		}
		cout << "\n";
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (nxt[i][j] == 0) {
				cout << 0 << "\n";
				continue;
			}
			path.push_back(i);
			int st = i;
			while (nxt[st][j] != j) {
				cnt++;
				path.push_back(nxt[st][j]);
				st = nxt[st][j];
			}
			path.push_back(j);
			cout << cnt << " ";
			for (int k = 0; k < path.size(); k++) {
				cout << path[k] << " ";
			}
			path.clear();
			cnt = 2;
			cout << "\n";
		}
	}
}