#include <iostream>
using namespace std;

int table[101][101];
int main() {
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (i == j) table[i][j] = 0;
			else table[i][j] = 100000 * 100;
		}
	}

	int n, m;
	cin >> n >> m;
	
	int a, b, c;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if (table[a][b] < c) continue;
		table[a][b] = c;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (j == i || k == i || j == k) continue;
				if (table[j][k] > table[j][i] + table[i][k]) {
					table[j][k] = table[j][i] + table[i][k];
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (table[i][j] == 100000*100) {
				cout << 0 << " ";
				continue;
			}
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}