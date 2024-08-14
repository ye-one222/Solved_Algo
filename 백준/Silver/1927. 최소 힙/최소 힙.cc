#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, x;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x != 0) {
            pq.push(x);
        }
        else {
            if (pq.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
}