#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<string, int> um;
string intToString[100005]; //map으로는 key->value 접근만 가능, 반대는 안되니까 이 배열 필요

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;
	
	for (int i = 1; i <= N; i++) {
		string input;
		cin >> input;
		um.insert({ input, i });
		intToString[i] = input;
	}

	for (int i = 0; i < M; i++) {
		string input;
		cin >> input;
		if (input[0] >= 'A' && input[0] <= 'Z') {
			cout << um[input] << "\n";
		}
		else {
			//auto it = um.find(input); 불가능
			//cout << it->first << "\n"; //. 아니라 ->
			cout << intToString[stoi(input)] << "\n";
		}
	}
}