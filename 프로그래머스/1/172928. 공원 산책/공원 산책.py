def solution(park, routes):
    answer = []
    st_first = -1
    for i in range(len(park)):
        for j in range(len(park[i])):
            if park[i][j]=="S": 
                st_first = i
                st_second = j
                break
        if st_first>=0: break
        
    nxt_first=cur_first=st_first
    nxt_second=cur_second=st_second
    
    for inst in routes :
        flag=True
        nxt_first=cur_first
        nxt_second=cur_second
        if inst[0]=="N":
            for _ in range(int(inst[2])):
                nxt_first -= 1
                if nxt_first>=len(park) or nxt_first<0 or nxt_second>=len(park[0]) or nxt_second<0:
                    flag=False
                    break
                if park[nxt_first][nxt_second]=="X":
                    flag=False
                    break
        elif inst[0]=="S":
            for _ in range(int(inst[2])):
                nxt_first += 1
                if nxt_first>=len(park) or nxt_first<0 or nxt_second>=len(park[0]) or nxt_second<0:
                    flag=False
                    break
                if park[nxt_first][nxt_second]=="X":
                    flag=False
                    break
        elif inst[0]=="W":
            for _ in range(int(inst[2])):
                nxt_second -= 1
                if nxt_first>=len(park) or nxt_first<0 or nxt_second>=len(park[0]) or nxt_second<0:
                    flag=False
                    break
                if park[nxt_first][nxt_second]=="X":
                    flag=False
                    break
        elif inst[0]=="E":
            for _ in range(int(inst[2])):
                nxt_second += 1
                if nxt_first>=len(park) or nxt_first<0 or nxt_second>=len(park[0]) or nxt_second<0:
                    flag=False
                    break
                if park[nxt_first][nxt_second]=="X":
                    flag=False
                    break
        if flag:    
            cur_first=nxt_first
            cur_second=nxt_second
        
    answer.append(int(cur_first))
    answer.append(int(cur_second))
    return answer