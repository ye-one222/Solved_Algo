#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> a;
int main() {
	long long N;
	long long M;
	cin >> N >> M;
	for (long long i = 0; i < N; i++) {
		long long input;
		cin >> input;
		a.push_back(input);
	}
	sort(a.begin(), a.end());

	long long min = 0x7ffffffff;

	for (long long i = 0; i < N; i++) {
		long long st = i;
		long long en = i + 1;
		while (st <= en && en < N) {
			if (a[en] - a[st] >= M) {
				if (min > a[en] - a[st]) {
					min = a[en] - a[st];
				}
				break;
			}
			else {
				en++;
			}
		}
	}
	cout << min;
}