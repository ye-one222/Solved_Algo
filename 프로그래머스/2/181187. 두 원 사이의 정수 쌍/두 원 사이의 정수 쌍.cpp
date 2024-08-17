#include <string>
#include <vector>
#include <math.h>

using namespace std;

int a,b;
long long solution(int r1, int r2) {
    long long answer = 0;
    
    for(int i=1; i<=r2; i++){
        int minY = (int)ceil(sqrt((long long)r1*r1 - (long long)i*i));
        int maxY = (int)floor(sqrt((long long)r2*r2 - (long long)i*i));
        
        if(i>r1)
            minY = 0;
        
        answer+=(maxY-minY+1);
    }
    
    return answer*4;
}