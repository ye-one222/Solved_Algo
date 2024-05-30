#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_multimap<int, string> um;
vector<string> sl;
int main() {
	int K, L;
	cin >> K >> L;
	
	for (int i =0; i < L; i++) {
		string input;
		int check = 0;
		cin >> input;

		if (i == 0) {
			sl.push_back(input);
			um.insert({ i, input });
			continue;
		}

		for (int j = 0; j < sl.size(); j++) {
			if (sl[j] == input) {
				check = 1;
				um.erase(j);
				break;
			}
		}
		
		um.insert({ i, input });
		if (check == 1) sl.push_back("0");
		else sl.push_back(input);
	}
	
	int cnt = 0;
	for (int i = 0; i < L; i++) {
		auto it = um.find(i);
		if (it == um.end()) {
			if (cnt == K)
				break;
			cnt++;
			continue;
		}
		cnt++;
		cout << it->second << "\n";
	}
}