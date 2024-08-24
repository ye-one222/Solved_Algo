#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>
using namespace std;

vector<tuple<int, int, string>> v;

bool cmp(const tuple<int, int, string> t1, const tuple<int, int, string> t2){
    if(get<0>(t1)==get<0>(t2))
        return get<1>(t1) < get<1>(t2);
    return get<0>(t1) < get<0>(t2);
}

int main(){
    int N;
    cin >> N;
    
    for(int i=0; i<N; i++){
        int age; string name;
        cin >> age >> name;
        v.push_back(make_tuple(age, i, name));
    }
    sort(v.begin(), v.end(), cmp);
    
    for(int i=0; i<N; i++){
        cout << get<0>(v[i]) << " " << get<2>(v[i]) << "\n";
    }
}