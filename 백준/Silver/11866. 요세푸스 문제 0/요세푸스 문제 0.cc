#include <iostream>
#include <list>
using namespace std;

list<int> l;
list<int>::iterator iter;
int cnt;
int main(){
    int N, K;
    cin>>N>>K;
    for(int i=1;i<=N;i++){
        l.push_back(i);
    }
    
    iter = l.begin();
    cout<<"<";
    while(!l.empty()){
        for(int i=0;i<K;i++){
            if(iter==l.end()){
                iter = l.begin();
            }
            iter++;
        }
        
        if(cnt!=N-1){
            cout << *(--iter) << ", ";
        }else{
            cout << *(--iter) << ">";
            break;
        }
        iter = l.erase(iter);
        cnt++;
    }
}