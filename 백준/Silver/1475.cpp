#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string room;
	int cnt[9] = {0}; //6ÀÌ¶û 9¶û 6ÀÌ¶ó°í °°ÀÌ Ã³¸®
	int num;
	cin >> room;
	
	for (int i = 0; i < room.length(); i++) {
		num = room[i] - '0';
		if (num == 6 || num == 9) {
			cnt[6]++;
		}
		else {
			cnt[num]++;
		}
	}

	cnt[6] = cnt[6] / 2 + (cnt[6] % 2 != 0);
	int max = cnt[0];
	for (int i = 1; i < 9; i++) {
		if (max <= cnt[i]) {
			max = cnt[i];
		}
	}
	cout << max;
}