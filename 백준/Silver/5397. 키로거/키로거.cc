#include <iostream>
#include <list>
#include <string>
using namespace std;

list<string> sl;
list<string>::iterator iter = sl.begin();
int main() {
    int x;
    string L;

    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> L;
        for (int j = 0; j < (int)L.size(); j++) {
            string next = string(1, L[j]);

            if (next == "<") {
                if (iter != sl.begin())
                    iter--;
            }
            else if (next == ">") {
                if (iter != sl.end())
                    iter++;
            }
            else if (next == "-") {
                if (iter != sl.begin())
                    iter = sl.erase(--iter);
            }
            else {
                iter = sl.insert(iter, next);
                iter++;
            }
        }
        for (iter = sl.begin(); iter != sl.end(); iter++) {
            cout << *iter;
        }
        cout << "\n";
        sl.clear();
        iter = sl.begin();
    }
}