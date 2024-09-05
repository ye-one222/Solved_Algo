def solution(babbling):
    answer = 0
    bab_length = len(babbling)
    
    for i in range(bab_length) :
        flag = 1
        j = 0
        while j < len(babbling[i]) :
            if babbling[i][j:j+3]=="aya" :
                j += 3
            elif babbling[i][j:j+2]=="ye" :
                j += 2
            elif babbling[i][j:j+3]=="woo" :
                j += 3
            elif babbling[i][j:j+2]=="ma" :
                j += 2
            else :
                flag = 0
                break

        if flag==1 :
            answer += 1
    return answer