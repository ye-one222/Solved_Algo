import sys

input = sys.stdin.readline().strip()

while input != "*":
    flag = 0
    for D in range(len(input)-1):
        d = dict()
        for k in range(len(input)-D-1):
            subst = input[k]+input[k+D+1]
            if d.get(subst, "Not found") == "Not found":
                d[subst] = 1
            else:
                flag = 1
                break
        if flag:
            break
    if flag:
        print(input + " is NOT surprising.")
    else:
        print(input + " is surprising.")

    input = sys.stdin.readline().strip()