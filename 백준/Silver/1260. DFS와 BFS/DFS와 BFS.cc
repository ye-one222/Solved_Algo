#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> v[1001];    // 각 노드의 간선 저장
bool visit[1001];
queue<int> q;

void dfs(int start){
    cout<<start<<" ";
    visit[start] = true;
    for(int i=0;i<v[start].size();i++){
        int next = v[start][i];
        if(visit[next]) continue;
        dfs(next);
    }
}

void bfs(int start){
    cout<<start<<" ";
    visit[start] = true;
    for(int i=0;i<v[start].size();i++){
        int next = v[start][i];
        if(visit[next]) continue;
        q.push(next);
    }
    while(!q.empty() && visit[q.front()]){
        q.pop();
    }
    
    if(!q.empty())
        bfs(q.front());
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,M,V,a,b;
    cin>>N>>M>>V;
    for(int i=0;i<M;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=N;i++){
        sort(v[i].begin(), v[i].end());
    }
    
    dfs(V);
    memset(visit, false, sizeof(visit));
    cout<<"\n";
    bfs(V);
}