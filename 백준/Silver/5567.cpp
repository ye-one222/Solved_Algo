#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> fv[501];
vector<int> come;
int main() {
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		fv[a].push_back(b);
		fv[b].push_back(a);
	}

	int cnt = fv[1].size();
	come = fv[1];

	for (int i = 0; i < fv[1].size(); i++) {
		int fr = fv[1][i];
		//cout << fr << "\n";

		for (int j = 0; j < fv[fr].size(); j++) {
			int frOffr = fv[fr][j];
			//cout << frOffr << " ";

			if (frOffr!=1 && find(come.begin(), come.end(), frOffr) == come.end()) {
				cnt++;
				come.push_back(frOffr);
			}
		}
	}
	cout << cnt;
}