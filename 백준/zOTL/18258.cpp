#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int n;
	string inst;
	vector<int> queue;
	queue.clear();
	int front = 0; //제일 처음 위치 가리킴
	int rear = 0; //제일 마지막 위치 가리킴

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i) {
		getline(cin, inst);

		istringstream ss(inst);
		string stringBuffer;
		getline(ss, stringBuffer, ' ');
		if (stringBuffer == "push") {
			getline(ss, stringBuffer);
			queue.push_back(stoi(stringBuffer));
			rear++;
		}
		else {
			if (stringBuffer == "pop") {
				if (rear == front) {
					cout << "- 1" << "\n";
				}
				else {
					cout << queue[front++]<< "\n";
				}
			}
			else if (stringBuffer == "size") {
				cout << rear - front << "\n";
			}
			else if (stringBuffer == "empty") {
				if (rear - front == 0) {
					cout << 1 << "\n";
				}
				else {
					cout << 0 << "\n";
				}
			}
			else if (stringBuffer == "front") {
				if (rear - front == 0) {
					cout << -1 << "\n";
				}
				else {
					cout << queue[front] << "\n";
				}
			}
			else {
				if (rear - front == 0) {
					cout << -1 << "\n";
				}
				else {
					cout << queue[rear - 1] << "\n";
				}
			}
		}
	}

}