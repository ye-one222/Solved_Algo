#include <iostream>
#include <deque>
#include <algorithm> //find 함수 쓰려면 있어야 함
using namespace std;

int main() {
	deque<int> q;
	int N, M;
	int toPop = 0;
	int cnt = 0;

	cin >> N;
	cin >> M;

	for (int i = 1; i <= N; i++) {
		q.push_back(i);
	}

	for (int i = 0; i < M; i++) {
		cin >> toPop;

		while (q.front() != toPop) {
			auto it = find(q.begin(), q.end(), toPop);
			if (distance(q.begin(), it) <= q.size() / 2) {
				//2번
				q.push_back(q.front());
				q.pop_front();
				cnt++;
			}
			else {
				//3번
				q.push_front(q.back());
				q.pop_back();
				cnt++;
			}
		}
		q.pop_front();
	}
	cout << cnt;
}