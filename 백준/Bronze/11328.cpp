#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	string s1, s2;
	//int flag = 1; //0이면 impossible
	
	for (int i = 0; i < N; i++) {
		int flag;
		int cnt[26] = { 0 }; //알파벳 개수 카운트, 반복문 돌 때마다 초기화 해야함
		cin >> s1;
		cin >> s2;
		
		if (s1.length() != s2.length()) {
			flag = 0;
			cout << "Impossible" << endl;
		}
		else {
			for (int j = 0; j < s1.length(); j++) {
				cnt[s1[j] - 'a']++;
			}
			for (int k = 0; k < s2.length(); k++) {
				cnt[s2[k] - 'a']--;
			}

			for (int a = 0; a < 26; a++) {
				if (cnt[a] != 0) {
					flag = 0;
					break;
				}
				else
					flag = 1;
			}

			if (flag == 0) {
				cout << "Impossible" << endl;
			}
			else {
				cout << "Possible" << endl;
			}
		}
	}
}