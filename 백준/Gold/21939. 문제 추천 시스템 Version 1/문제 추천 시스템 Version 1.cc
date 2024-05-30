#include <iostream>
#include <set>
#include <map>
using namespace std;

multiset<int> allLevel;
map<int, int> probMap; // 문제, 난이도
set<int> allProb[101];

int main() {
    int N, P, M, L;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> P >> L;
        allProb[L].insert(P);
        probMap.insert({ P, L });
        allLevel.insert(L);
    }

    cin >> M;
    string cmd;
    int x;
    for (int i = 0; i < M; i++) {
        cin >> cmd;
        if (cmd == "add") {
            cin >> P >> L;
            allProb[L].insert(P);
            probMap.insert({ P, L });
            allLevel.insert(L);
        }
        else if (cmd == "recommend") {
            cin >> x;
            if (x == 1) {
                // 가장 어려운 문제
                auto levelIt = --allLevel.end();
                int level = *levelIt;
                while (allProb[level].empty() && levelIt != allLevel.begin()) {
                    levelIt--;
                    level = *levelIt;
                }
                if (!allProb[level].empty()) {
                    cout << *(--allProb[level].end()) << "\n";
                }
            }
            else {
                // 가장 쉬운 문제
                auto levelIt = allLevel.begin();
                int level = *levelIt;
                while (allProb[level].empty() && levelIt != allLevel.end()) {
                    levelIt++;
                    if (levelIt != allLevel.end()) {
                        level = *levelIt;
                    }
                }
                if (!allProb[level].empty()) {
                    cout << *allProb[level].begin() << "\n";
                }
            }
        }
        else {
            cin >> P;
            int level = probMap.at(P);
            allProb[level].erase(P);
            probMap.erase(P);
            if (allProb[level].empty()) {
                allLevel.erase(level);
            }
        }
    }
    return 0;
}
