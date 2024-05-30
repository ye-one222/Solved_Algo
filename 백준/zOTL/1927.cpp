#include <iostream>
#include <algorithm>
using namespace std;

long long heap[100005];
int sz = 0; //heap에 들어있는 원소의 수

void push(int x) {
	heap[++sz] = x;
	int idx = sz;
	while (idx != 1) {
		int par = idx / 2;
		if (heap[par] <= heap[idx]) break;
		swap(heap[par], heap[idx]);
		idx = par;
	}
}

int top() {
	return heap[1];
}

void pop() {
	heap[1] = heap[sz--];
	int idx = 1;
	//왼쪽 자식의 인덱스가 sz보다 크면 idx는 리프
	while (idx * 2 <= sz) {
		int lc = 2 * idx, rc = 2 * idx + 1;
		int min_child = lc;
		if (rc <= sz && heap[rc] < heap[lc]) {
			min_child = rc;
		}
		if (heap[idx] <= heap[min_child])break;
		swap(heap[idx], heap[min_child]);
		idx = min_child;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	long long x;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x > 0) {
			push(x);
		}
		else {
			cout << top() << "\n";
			pop();
		}
	}
}