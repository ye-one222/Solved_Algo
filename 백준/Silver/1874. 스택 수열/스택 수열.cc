#include <iostream>
#include <vector>
using namespace std;

vector<int> st;
vector<char> answer;
int main(){
    int n, x, record;
    cin>>n;
    
    st.push_back(1);
    record=1;
    answer.push_back('+');
    
    for(int i=0;i<n;i++){
        cin>>x;
        int top=st.back();
        if(x==top){
            st.pop_back();
            answer.push_back('-');
        }else if(x>top){
            while(record!=x){
                st.push_back(++record);
                answer.push_back('+');
            }
            st.pop_back();
            answer.push_back('-');
        }else{
            cout<<"NO";
            return 0;
        }
    }
    
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<"\n";
    }
}