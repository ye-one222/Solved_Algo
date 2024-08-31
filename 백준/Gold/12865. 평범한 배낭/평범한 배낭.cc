#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int D[101][100001];    // 1-indexed
vector<int> wv;    // 0-indexed
vector<int> vv;    // 0-indexed
int main(){
    int n, k, w, v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>w>>v;
        wv.push_back(w);
        vv.push_back(v);
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j-wv[i-1] < 0)
                D[i][j]=D[i-1][j];
            else
                D[i][j]=max(D[i-1][j], D[i-1][j-wv[i-1]]+vv[i-1]);
        }
    }
    cout<<D[n][k];
}