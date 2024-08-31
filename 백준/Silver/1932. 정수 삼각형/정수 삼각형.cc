#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v[501];    //1-indexed

int main(){
    int n, x;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cin>>x;
            v[i].push_back(x);
        }
    }
    
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            v[i][j]=max(v[i+1][j],v[i+1][j+1])+v[i][j];
        }
    }
    cout<<v[1][0];
}