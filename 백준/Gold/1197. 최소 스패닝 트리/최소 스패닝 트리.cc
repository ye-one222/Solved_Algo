//Prim's Algo. 이용
#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

vector<pair<int, int>> adj[10005]; //cost, 정점번호
bool check[10005]; //해당 정점이 MST에 속해있는지
int main() {
	int V, E, a, b, cost;
	int cnt = 0; int ans = 0;
	cin >> V >> E;

	for (int i = 0; i < E; i++) {
		cin >> a >> b >> cost;
		adj[a].push_back({ cost,b });
		adj[b].push_back({ cost,a });
	}
	
	priority_queue<tuple<int, int, int>, //cost, 정점1, 정점2
		vector<tuple<int, int, int>>,
		greater<tuple<int, int, int>>> pq; //최소 힙
	
	check[1] = 1; //처음 시작점을 1로
	for (auto next : adj[1]) {
		pq.push({ next.first,1,next.second });
	}
	while (cnt < V - 1) {
		tie(cost, a, b) = pq.top(); //최소 비용의 간선
		pq.pop();
		if (check[b])continue;
		ans += cost;
		check[b] = true;
		cnt++;
		for (auto next : adj[b]) {
			if (!check[next.second]) //MST에 없는 정점이라면
				pq.push({ next.first,b,next.second });
		}
	}
	cout << ans;
}
