#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	short N;
	cin >> N;

	for (int i = 0; i < N * N; i++) {
		int x;
		cin >> x;
		pq.push(x);
	}
	for (int i = 0; i < N - 1; i++) {
		pq.pop();
	}
	cout << pq.top();
}