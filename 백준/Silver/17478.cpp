#include <iostream>
using namespace std;

void print_(int N, int orig) {
	for (int i = N; i < orig; i++) {
		cout << "____";
	}
}

void said(int orig, int N) {
	if (N == 0) {
		//for (int i = N; i < orig; i++) {
		//	cout << "____";
		//}
		print_(N, orig);
		cout << "\"����Լ��� ������?\"\n";
		for (int i = N; i < orig; i++) {
			cout << "____";
		}
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";

		for (int i = N; i < orig; i++) {
			cout << "____";
		}
		cout << "��� �亯�Ͽ���.\n";
		for (int j = 0; j < orig; j++) {
			for (int i = j; i < orig-1; i++) {
				cout << "____";
			}
			cout << "��� �亯�Ͽ���.\n";
		}
	}
	else {
		for (int j = 0; j < 3; j++) {
			for (int i = N; i < orig; i++) {
				cout << "____";
			}
			
			if (j == 0) {
				cout << "\"����Լ��� ������?\"\n";
				for (int i = N; i < orig; i++) {
					cout << "____";
				}
				cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
			}
			else if (j == 1)
				cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
			else
				cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		}
		said(orig, N - 1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N; cin >> N;
	
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	said(N, N);
}