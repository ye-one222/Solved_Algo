#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int flag;
vector<char> st;
int main(){
    int T; string str;
    cin>>T;
    for(int i=0;i<T;i++){
        st.clear();
        flag=0;
        cin>>str;
        for(int j=0;j<str.size();j++){
            if(str[j]=='(')
                st.push_back(str[j]);
            else{
                if(st.empty()){
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
                st.pop_back();
            }
        }
        if(flag)
            continue;
        if(st.empty())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}