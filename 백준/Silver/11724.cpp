#include <iostream>
#include <vector>
using namespace std;

vector<int> vec[1001];
bool vis[1001];

void dfs(int cur) {
	vis[cur] = true;
	for (auto nxt : vec[cur]) {
		if (vis[nxt])continue;
		dfs(nxt);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M, u, v;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}

	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (vis[i])continue;
		dfs(i);
		cnt++;
	}
	cout << cnt;
}