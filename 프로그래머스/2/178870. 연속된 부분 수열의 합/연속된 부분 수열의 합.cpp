#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    
    int sum=0; int start=0; int end=-1; int size=1000001;
    for(int i=0; i<sequence.size(); i++){
        sum += sequence[i];
        end = i;
        
        if(sum<k){
            continue;
        }else if(sum>k){
            while(sum>k){
                sum-=sequence[start];
                start++;
            }
            if(sum==k){
                if(end+1-start<size){
                    answer.clear();
                    answer.push_back(start);
                    answer.push_back(end);
                    size = end+1-start;
                }
            }
        }else{
            if(end+1-start<size){
                answer.clear();
                answer.push_back(start);
                answer.push_back(end);
                size = end+1-start;
            }
        }
    }
    
    return answer;
}