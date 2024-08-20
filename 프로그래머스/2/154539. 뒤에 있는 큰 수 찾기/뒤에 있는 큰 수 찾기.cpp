#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i=0; i<numbers.size(); i++){
        answer.push_back(-1);
    }
    
    stack<int> stack;
    for(int i=numbers.size()-1; i>=0; i--){
        if(stack.empty())
            stack.push(numbers[i]);
        else{
            if(numbers[i]>=stack.top()){
                while(!stack.empty() && numbers[i]>=stack.top()){
                    stack.pop();
                }
                if(!stack.empty()) answer[i] = stack.top();
                stack.push(numbers[i]);
            }   
            else{
                answer[i] = stack.top();
                stack.push(numbers[i]);
            }
        }
    }
    
    
    return answer;
}