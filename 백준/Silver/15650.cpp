#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 8
int arr[MAX];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N; cin >> M;

	for (int i = M; i < N; i++) {
		arr[i] = 1;
	}
	do {
		for (int i = 0; i < N; i++) {
			if (arr[i] == 0)
				cout << i + 1 << " ";
		}
		cout << "\n";
	} while (next_permutation(arr, arr + N));
}