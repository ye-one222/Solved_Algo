def solution(s):
    answer = ''
    slist = list(s.split())
    
    for i in range(len(slist)):
        slist[i] = int(slist[i])
    maax = max(slist)
    miin = min(slist)
    answer = str(miin) + ' ' + str(maax)
    return answer