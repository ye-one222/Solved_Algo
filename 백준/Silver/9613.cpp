#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

/*int gcd(int a, int b) { //여기서 시간초과
	int di = 1;
	int ans = 1;
	int small = min(a, b);
	int big = max(a, b);
	while (di <= small) {
		if (small % di == 0 && big % di == 0) {
			ans = di;
		}
		di++;
	}
	return ans;
}*/

int gcd(int a, int b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		long long sum = 0;
		v.clear();
		cin >> n;
		for (int j = 0; j < n; j++) {
			int input;
			cin >> input;
			v.push_back(input);
		}
		for (int a = 0; a < n - 1; a++) {
			for (int b = a + 1; b < n; b++) {
				sum += gcd(v[a], v[b]);
			}
		}
		cout << sum << "\n";
	}
}