#include <iostream>
using namespace std;

int m[65][65];

void check(int sx, int sy, int n) {
    int def = m[sx][sy];
    for (int i = sx; i < sx + n; i++) {
        for (int j = sy; j < sy + n; j++) {
            if (n == 1) {
                cout << def;
                return;
            }
            if (def != m[i][j]) {
                cout << "(";
                check(sx, sy, n / 2);
                check(sx, sy + n / 2, n / 2);
                check(sx + n / 2, sy, n / 2);
                check(sx + n / 2, sy + n / 2, n / 2);
                cout << ")";
                return;
            }
        }
    }
    cout << def;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    string x;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x;
        for (int j = 0; j < N; j++) {
            m[i][j] = x[j]-'0';
        }
    }
    
    check(0, 0, N);
}