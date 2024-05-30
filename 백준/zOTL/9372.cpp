#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> flight;
//vector<bool> check;
int main() {
	int T, N, M, a, b;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int cnt = 0;
		cin >> N >> M;
		flight.clear();
		for (int j = 0; j < M; j++) {
			cin >> a >> b;
			flight.push_back({ a, b });
		}
		cout << N - 1 << "\n";
	}
}