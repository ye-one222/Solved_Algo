#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, x;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<N; i++){
        cout<<v[i]<<"\n";
    }
}