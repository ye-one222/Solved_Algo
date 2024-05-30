#include <iostream>
#include <stack>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int n, t;
	int cnt = 0;
	stack<int> s, cmp;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		s.push(t);
		//cmp.push(t);
	}

	for (int j = 0; j < n; ++j) {
		int maxBet = 0;
		int me = s.top();
		cmp = s;

		cmp.pop();
		
		for (int k = j; k < n - 1; ++k) {
			if (maxBet <= cmp.top()) {
				// �� �� �ִ� ���
				cnt++;
				maxBet = cmp.top();
				cmp.pop();
			}
			else {
				// �� �� ���� ���
				cmp.pop();
			}
		}
		s.pop();
	}
	cout << cnt;
}