pos = ["aya", "ye", "woo", "ma"]

def solution(babbling):
    answer = 0
    
    for i in babbling :
        for j in pos :
            i = i.replace(j," ")
        i = i.replace(" ","")
        if len(i)==0 :
            answer += 1
    
    return answer