#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> arrA;
vector<int> arrB;

int main() {
	int T, N, M;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int cnt = 0;
		arrA.clear();
		arrB.clear();

		cin >> N;
		cin >> M;
		
		for (int j = 0; j < N; j++) {
			int a;
			cin >> a;
			arrA.push_back(a);
		}
		for (int k = 0; k < M; k++) {
			int b;
			cin >> b;
			arrB.push_back(b);
		}

		sort(arrB.begin(), arrB.end());

		for (int n = 0; n < N; n++) {
			for (int m = 0; m < M; m++) {
				if (arrA[n] > arrB[m]) {
					cnt++;
				}
				else {
					break;
				}
			}
		}
		cout << cnt << "\n";
	}
}