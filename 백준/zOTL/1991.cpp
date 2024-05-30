#include <iostream>
#include <vector>
#include <queue>
using namespace std;

char lc[27];
char rc[27];
char par[27];

void pre(char root) {
	cout << root;
	int cur = root - '0';
	if (lc[cur] != '.')pre(lc[cur]);
	else pre(rc[cur]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		char f, s, t;
		cin >> f >> s >> t;
		par[s - '0'] = f;
		par[t - '0'] = f;
		lc[f - '0'] = s;
		rc[f - '0'] = t;
	}
	pre('A');
}