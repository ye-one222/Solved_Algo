#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> timeArr;
int totalTime;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		timeArr.push_back(input);
	}
	sort(timeArr.begin(), timeArr.end());
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			totalTime += timeArr[j];
		}
	}
	cout << totalTime;
}