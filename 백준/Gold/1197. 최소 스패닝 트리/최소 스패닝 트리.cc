#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> p(10005, -1);
tuple<int, int, int> edge[100005];

int find(int x) {
	if (p[x] < 0) return x; //자기 자신이 루트 노드임
	return p[x] = find(p[x]); //최종 루트를 찾음 (경로 압축을 위해 p[x]에 직접 저장)
}

bool is_diff_group(int a, int b) {
	a = find(a); b = find(b); //a와 b에 각각의 루트 노드 저장
	if (a == b) return 0; //루트 노드 같음 => 같은 그룹
	//아래는 루트가 다를 경우 집합 합치는 거
	if (p[a] == p[b])p[a]--; //같은 크기 집합일 때
	if (p[a] < p[b])p[b] = a; //큰 집합이 작은 집합을 흡수하도록
	else p[a] = b;
	return 1;
}

int main() {
	int V, E, a, b, cost;
	cin >> V >> E;

	for (int i = 0; i < E; i++) {
		cin >> a >> b >> cost;
		edge[i] = { cost,a,b };
	}
	sort(edge, edge + E);

	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < E; i++) {
		tie(cost, a, b) = edge[i]; //cost, a, b에 각각 할당됨
		if (!is_diff_group(a, b)) continue;
		ans += cost;
		cnt++;
		if (cnt == V - 1) break;
	}
	cout << ans;
}
