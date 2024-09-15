#include <iostream>
#include <cmath>
using namespace std;

int answer;
int main(){
    int N,r,c,temp;
    cin>>N>>r>>c;
    
    temp=N;
    while(temp!=0){
        if(c>=pow(2,temp-1)){
            if(r<pow(2,temp-1)){
                //오위
                answer+=pow(2,2*temp-2);
                c-=pow(2,temp-1);
            }else{
                //오밑
                answer+=3*pow(2,2*temp-2);
                r-=pow(2,temp-1);
                c-=pow(2,temp-1);
            }
        }else{
            if(r<pow(2,temp-1)){
                //왼위
                answer+=0;
            }else{
                //왼밑
                answer+=pow(2,2*temp-1);
                r-=pow(2,temp-1);
            }
        }
        temp--;
    }
    cout<<answer;
}