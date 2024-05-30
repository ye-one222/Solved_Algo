#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> a;
int main() {
	int N, S;
	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		a.push_back(input);
	}

	int min = 200000;
	int sum = a[0];
	for (int i = 0; i < N; i++) {
		int st = i;
		int en = i + 1;

		while (st <= en && en < N && en - st + 1 < min) {
			sum += a[en];
			if (sum >= S) {
				if (min > en - st + 1) {
					min = en - st + 1;
				}
				break;
			}
			en++;
		}
	}
	if (min == 200000) cout << 0;
	else cout << min;
}