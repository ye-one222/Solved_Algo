#include <iostream>
#include <queue>
using namespace std;

#define MAX 2187
int paper[MAX][MAX];
int cnt[3];

void func(int x, int y, int size) {
	bool allSame = true;
	for (int i = x; i < x+size; i++) {
		for (int j = y; j < y+size; j++) {
			if (paper[i][j] != paper[x][y]) {
				allSame = false;
				break;
			}
		}
		if (!allSame)
			break;
	}
	if (!allSame) {
		func(x, y, size / 3);
		func(x + size / 3, y, size / 3);
		func(x + 2 * size / 3, y, size / 3);

		func(x, y + size / 3, size / 3);
		func(x + size / 3, y + size / 3, size / 3);
		func(x + 2 * size / 3, y + size / 3, size / 3);

		func(x, y + 2 * size / 3, size / 3);
		func(x + size / 3, y + 2 * size / 3, size / 3);
		func(x + 2 * size / 3, y + 2 * size / 3, size / 3);
	}
	else {
		if (paper[x][y] == -1)
			cnt[0]++;
		else if (paper[x][y] == 0)
			cnt[1]++;
		else
			cnt[2]++;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> paper[i][j];
		}
	}
	
	func(0, 0, N);
	
	for (int i = 0; i < 3; i++) {
		cout << cnt[i] << endl;
	}
}