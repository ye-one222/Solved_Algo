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
	
	cin >> t;
	s.push(t);

	for (int i = 1; i < n; i++) {
		cin >> t;
		if (t > s.top()) {
			s.pop();
			s.push(t);
		}
		else {
			s.push(t);
		}
	}

	cout << cnt;
}