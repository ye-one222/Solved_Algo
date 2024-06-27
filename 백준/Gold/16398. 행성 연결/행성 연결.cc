#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq; //cost, a, b
vector<pair<int, int>> adj[1001]; //cost, b
bool check[1001];
int main() {
	int N, c;
	int a, b;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> c;
			if (c == 0)continue;
			adj[i].push_back({ c,j });
		}
	}

	//첫 방문 : 0번 행성
	int cnt = 1;
	long long ans = 0;
	a = 0; check[a] = true;

	while (cnt <= N - 1) {
		for (auto next : adj[a]) {
			pq.push({ next.first, a, next.second });
		}
		tie(c, a, b) = pq.top();
		while (check[b]) {
			pq.pop();
			tie(c, a, b) = pq.top();
		}
		ans += c;
		check[b] = true;
		a = b;
		pq.pop();
		cnt++;
	}

	cout << ans;
}