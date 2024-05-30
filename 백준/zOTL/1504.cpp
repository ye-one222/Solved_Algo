#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> adj[200005];
const int INF = 0x3f3f3f3f;
bool fix[200005];
int d[200005];

void dijkstra_naive(int st) {
	fill(d, d + V + 1, INF);
	d[st] = 0;
	while (true) {
		int idx = -1;
		for (int i = 1; i <= V; i++) {
			if (fix[i])continue;
			if (idx == -1) idx = i;
			else if (d[i] < d[idx] == INF) idx = i;
		}
		if (idx == -1 || d[idx] == INF) {

		}
	}
}

int main() {
	int N, E, a, b, c, v1, v2;
	cin >> N >> E;

	fill(d, d + N + 1, INF);
	for (int i = 0; i < E; i++) {
		cin >> a >> b >> c;
	}
}