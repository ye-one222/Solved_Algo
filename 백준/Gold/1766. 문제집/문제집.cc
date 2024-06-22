#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int indegree[32001];
priority_queue<int, vector<int>, greater<int>> qu;
vector<int> adj[32001];
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
		if (indegree[i] == 0)
			qu.push(i);
	}

	while (!qu.empty()) {
		int size = adj[qu.top()].size();
		int top = qu.top();
		ans.push_back(qu.top());
		if (!qu.empty())qu.pop();
		if (size != 0) {
			for (int j = 0; j < size; j++) {
				indegree[adj[top][j]]--;
				if (indegree[adj[top][j]] == 0) {
					qu.push(adj[top][j]);
				}
			}
		}
		
	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
}