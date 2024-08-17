#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> vec;
vector<int> temp;
int visit[101];

void dfs(int x){
    for(int i=0;i<vec[x].size();i++){
        if(!visit[vec[x][i]]){
            visit[vec[x][i]]=1;
            dfs(vec[x][i]);
        }
    }
}

void print(int k){
    for(int i=0;i<k;i++){
        cout<<visit[i]<<" ";
    }
    cout<<"\n";
}

void clean(int k){
    for(int i=0;i<k;i++){
        visit[i]=0;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, x;
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>x;
            if(x==1) temp.push_back(j);
        }
        vec.push_back(temp);
        temp.clear();
    }
    
    for(int i=0;i<N;i++){
        dfs(i);
        
        print(N);
        clean(N);
    }
}