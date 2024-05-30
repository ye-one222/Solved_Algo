#include <iostream>
#include <string>
using namespace std;

int main() {
	int A, B, C, num;
	string mul;
	int cnt[10] = { 0 };
	cin >> A;
	cin >> B;
	cin >> C;
	mul = to_string(A * B * C);

	for (int i = 0; i < mul.length(); i++) {
		num = mul[i] - '0';
		cnt[num]++;
	}
	for (int i = 0; i < 10; i++) {
		cout << cnt[i] << endl;
	}
}