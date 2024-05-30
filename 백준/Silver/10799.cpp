#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string input;
	stack<char> s;
	int cnt = 0;
	int total = 0;

	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '(') {
			s.push(input[i]);
			cnt++;
		}
		else {
			if (input[i - 1] == '(') {
				//·¹ÀÌÀú
				cnt--;
				total += cnt;
				s.pop();
			}
			else {
				cnt--;
				total++;
				s.pop();
			}
		}
	}
	cout << total;
}