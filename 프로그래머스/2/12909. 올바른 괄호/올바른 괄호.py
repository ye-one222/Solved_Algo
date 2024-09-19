def solution(s):
    stack = list()
    for i in s :
        if i=="(":
            stack.append(i)
        else:
            if not stack:
                return False
            stack.pop()
    if not stack:
        return True
    else:
        return False