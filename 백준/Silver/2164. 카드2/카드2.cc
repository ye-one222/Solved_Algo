#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    while (q.size() > 1) {
        q.pop();

        int top = q.front();
        if (q.size() == 1) {
            break;
        }
        else {
            q.pop();
            q.push(top);
        }
    }
    cout << q.front();
}