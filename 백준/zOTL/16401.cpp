#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int M, N;
	cin >> M >> N;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	
	int max = 0;
	sort(v.begin(), v.end());
	// 8 70 120 -> 60
	// 8 50 120 -> 50
	if (M <= N) {
		int st = v.size() - M;
		int en = v.size() - 1;
		max = v[st];

		while (st != en) {
			if (v[st + 1] >= v[st] * 2) {

			}
		}
		
		/*int rem = v[en] % M;
		if ((v[en] - rem) / M > v[st]) {
			max = (v[en] - rem) / M;
		}
		else if (()) {

		}*/
		
	}
	else {
		int more = M - N + 1;
		
		
	}
}