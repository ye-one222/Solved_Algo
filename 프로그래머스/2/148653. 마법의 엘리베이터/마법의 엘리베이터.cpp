#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int storey) {
    int answer = 0;
    int repeat = 1;
    
    while(storey != 0){
        if(storey%(int)pow(10,repeat) == 0){
            repeat++;
            continue;
        }else if(storey%(int)pow(10,repeat) == 5*(int)pow(10,repeat-1)){
            if(storey%(int)pow(10,repeat+1) < 5*(int)pow(10,repeat)){
                while(storey%(int)pow(10,repeat) != 0){
                    storey -= (int)pow(10,repeat-1);
                    answer++;
                }
            }else{
                while(storey%(int)pow(10,repeat) != 0){
                    storey += (int)pow(10,repeat-1);
                    answer++;
                }
            }
        }else if(storey%(int)pow(10,repeat) < 5*(int)pow(10,repeat-1)){
            while(storey%(int)pow(10,repeat) != 0){
                storey -= (int)pow(10,repeat-1);
                answer++;
            }
        }else{
            while(storey%(int)pow(10,repeat) != 0){
                storey += (int)pow(10,repeat-1);
                answer++;
            }
        }
        repeat++;
    }
    return answer;
}