#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const pair<int, string> &p1, const pair<int, string> &p2){
    if(p1.first == p2.first){
        for(int i=0; i<p1.first; i++){
            if(string(1,p1.second[i]) == string(1,p2.second[i]))
                continue;
            return p1.second[i] < p2.second[i];
        }
    }
    return p1.first < p2.first;
}

vector<pair<int, string>> v;
int main(){
    int N; string str;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>str;
        v.push_back(make_pair((int)str.size(), str));
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<v.size(); i++){
        if(i!=0){
            if(v[i-1].second == v[i].second)
                continue;
        }
        cout<<v[i].second<<"\n";
    }
}