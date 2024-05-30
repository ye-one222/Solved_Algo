#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num, k;
	cin >> num;
	cin >> k;
	vector<int> V;
	int index = 0;

	for (int i = 1; i < num + 1; i++) {
		V.push_back(i);
	}
	
	vector<int>::iterator t = V.begin();
	cout << "<";
	while (V.size() > 1) {
		index = (index + k - 1) % V.size();
		cout << V[index] << ", ";
		t = V.begin() + index;
		V.erase(t);
	}
	index = (index + k - 1) % V.size();
	cout << V[index] << ">";
}