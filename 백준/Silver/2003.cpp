#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	int cnt = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}

	for (int st = 0; st < N; st++) {
		int en = st;
		int sum = 0;
		while (en < N && st <= en) {
			sum += v[en];
			if (sum == M) {
				cnt++;
				break;
			}
			en++;
		}
	}
	cout << cnt;
}