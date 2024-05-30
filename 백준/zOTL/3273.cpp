#include <iostream>
#include <vector>
using namespace std;

int main() { //½ÇÆÐ
	int n, num, x;
	vector<int> v;
	int cnt[1000001] = { 0 }; //ÀÎµ¦½º 0 ¾È¾¸
	int whatToFind;
	int find = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	cin >> x;

	for (int i = 0; i < n; i++) {
		whatToFind = x - v[i];
		if (whatToFind <= 0) {
			cnt[v[i]]++;
			continue;
		}
		else {
			if (cnt[whatToFind] != 0) {
				find++;
			}
			cnt[v[i]]++;
		}
	}
	cout << find;
}