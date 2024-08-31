#include <iostream>
using namespace std;

int D[1001];    //1-indexed

int main(){
    int n;
    cin>>n;
    D[0]=1; D[1]=1;
    for(int i=2;i<=n;i++){
        D[i]=(D[i-2]*2+D[i-1])%10007;
    }
    cout<<D[n];
}