#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> have;
vector<int> target;

int lower_idx(int target, int len) {
	int st = 0;
	int en = len;
	while (st < en) {
		int mid = (st + en) / 2;
		if (have[mid] >= target) en = mid;
		else st = mid + 1;
	}
	return st;
}

int upper_idx(int target, int len) {
	int st = 0;
	int en = len;
	while (st < en) {
		int mid = (st + en) / 2;
		if (have[mid] > target) en = mid;
		else st = mid + 1;
	}
	return st;
}

int main() {
	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		have.push_back(input);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		int input;
		cin >> input;
		target.push_back(input);
	}

	sort(have.begin(), have.end());

	for (int i = 0; i < M; i++) {
		cout << upper_idx(target[i], have.size()) - lower_idx(target[i], have.size()) << " ";
	}
}