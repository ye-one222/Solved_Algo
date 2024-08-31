#include <iostream>
using namespace std;

int D[101][10];    //1-indexed, 0-indexed
int sum;

int main(){
    for(int i=0; i<10; i++){
        if(i==0){
            D[1][i]=0;
            D[2][i]=1;
        }else if(i==9){
            D[1][i]=1;
            D[2][i]=1;
        }else{
            D[1][i]=1;
            D[2][i]=2;
        }
    }
    
    int n;
    cin>>n;
    
    for(int i=3;i<=n;i++){
        for(int j=0;j<10;j++){
            if(j==0)
                D[i][j]=0+D[i-1][j+1];
            else if(j==9)
                D[i][j]=D[i-1][j-1]+0; 
            else
                D[i][j]=D[i-1][j-1]+D[i-1][j+1]; 
            D[i][j]%=1000000000;
        }
    }
    
    for(int i=1;i<10;i++){
        sum+=D[n][i];
        sum%=1000000000;
    }
    cout<<sum;
}