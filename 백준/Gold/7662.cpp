#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T, k;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k;
		multiset<int> ms;
		for (int j = 0; j < k; j++) {
			char op;
			int n;
			cin >> op >> n;

			if (op == 'I') {
				ms.insert(n);
			}
			else {
				if (ms.empty()) {
					continue;
				}

				if (n < 0)
					ms.erase(ms.begin());
				else
					ms.erase(prev(ms.end()));
			}
		}
		if (ms.empty())cout << "EMPTY\n";
		else cout << *prev(ms.end()) << " " << *ms.begin() << "\n";
	}
}