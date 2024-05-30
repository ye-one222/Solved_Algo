#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 128
int board[MAX][MAX];
int cnt[2];

void paper(int size, int x, int y) {
	bool allSame = true;
	for (int i = x; i < x+size; i++) { //x부터 시작해야 함!
		for (int j = y; j < y+size; j++) { //y부터 시작해야 함!
			if (board[x][y] != board[i][j]) {
				allSame = false;
				break;
			}
		}if (!allSame) break;
	}

	if (!allSame) {
		paper(size / 2, x, y);
		paper(size / 2, x + size / 2, y);
		paper(size / 2, x, y + size / 2);
		paper(size / 2, x + size / 2, y + size / 2);
	}
	else {
		cnt[board[x][y]]++;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> board[i][j];
		}
	}
	
	paper(N, 0, 0);
	cout << cnt[0] << "\n";
	cout << cnt[1] << "\n";
}