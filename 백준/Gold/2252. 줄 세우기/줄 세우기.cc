#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<int> qu;
int indegree[32005];
vector<int> adj[32005];
vector<int> ans;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int N, M, A, B;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> A >> B;
		indegree[B]++;
		adj[A].push_back(B);
	}

	for (int i = 1; i <= N; i++) {
		if (indegree[i] == 0) {
			qu.push(i);
		}
	}
	
	while(!qu.empty()) {
		int size = adj[qu.front()].size();
		if (size != 0) {
			for (int j = 0; j < size; j++) {
				indegree[adj[qu.front()][j]]--;
				if (indegree[adj[qu.front()][j]] == 0)
					qu.push(adj[qu.front()][j]);
			}
		}
		ans.push_back(qu.front());
		qu.pop();
	}
	for (int i = 0; i < N; i++) {
		cout << ans[i] << " ";
	}
}