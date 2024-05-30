#include <iostream>
#include <vector>
using namespace std;

vector<int> list;
int main() {
	int N;
	cin >> N;
	
	int i = 2;
	while (N != 1) {
		if (N % i == 0) {
			list.push_back(i);
			N = N / i;
		}
		else {
			i++;
		}
	}

	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << "\n";
	}
}