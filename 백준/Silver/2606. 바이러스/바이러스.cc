#include <iostream>
#include <vector>
using namespace std;

vector<int> v[101];    //1-indexed
int isVisited[101];    //1-indexed
int cnt;
vector<int> st;

void dfs(int start){
    st.push_back(start);
    isVisited[start]=1;
    
    for(int i=0;i<v[start].size();i++){
        int nxt=v[start][i];
        if(!isVisited[nxt]){
            cnt++;
            dfs(nxt);
        }
    }
}

int main(){
    int n, e;
    
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    cout<<cnt;
}