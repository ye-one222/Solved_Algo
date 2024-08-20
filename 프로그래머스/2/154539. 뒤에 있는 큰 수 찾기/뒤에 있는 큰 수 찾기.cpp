#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i=0; i<numbers.size(); i++){
        answer.push_back(-1);
    }
    
    vector<int> stack;
    for(int i=numbers.size()-1; i>=0; i--){
        if(stack.empty())
            stack.push_back(numbers[i]);
        else{
            if(numbers[i]>=stack.back()){
                while(!stack.empty() && numbers[i]>=stack.back()){
                    stack.pop_back();
                }
                if(!stack.empty()) answer[i] = stack.back();
                stack.push_back(numbers[i]);
            }   
            else{
                answer[i] = stack.back();
                stack.push_back(numbers[i]);
            }
        }
    }
    
    
    return answer;
}