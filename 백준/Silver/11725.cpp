#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> vec[100001];
int par[100001];

void bfs(int root) {
	queue<int> q;
	q.push(root);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int nxt : vec[cur]) { //for-each¿Í À¯»ç
			if (par[cur] == nxt)continue;
			q.push(nxt);
			par[nxt] = cur;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, u, v;
	cin >> N;

	for (int i = 0; i < N-1; i++) {
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}

	bfs(1);

	for (int i = 2; i <= N; i++) {
		cout << par[i] << "\n";
	}
}