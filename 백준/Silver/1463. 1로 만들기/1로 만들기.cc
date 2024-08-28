#include <iostream>
using namespace std;
int D[1000001];

int main() {
	D[1] = 0;
	int N;
	cin >> N;
	for (int i = 2; i <= N; i++) {
		D[i] = D[i - 1] + 1;
		if (i % 3 == 0) {
			D[i] = min(D[i / 3] + 1, D[i]);
		}
		if (i % 2 == 0) {
			D[i] = min(D[i / 2] + 1, D[i]);
		}
	}
	cout << D[N];
}