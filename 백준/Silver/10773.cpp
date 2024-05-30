#include <iostream>
#include <stack>
using namespace std;

int main() {
	int k, n;
	int sum = 0;
	cin >> k;
	stack<int> stack;

	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n == 0) {
			stack.pop();
		}
		else {
			stack.push(n);
		}
	}

	int size = stack.size();
	for (int i = 0; i < size; i++) { //size 0이면 반복문 안 도니까 empty 확인 안해도 됨
		sum += stack.top();
		stack.pop();
	}

	cout << sum;
}