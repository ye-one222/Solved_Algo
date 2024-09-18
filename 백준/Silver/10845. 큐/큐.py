import sys
from collections import deque

input = sys.stdin.readline
N = int(input())
dq = deque()

for _ in range(N):
    inst = input().split()
    if inst[0]=="push":
        dq.append(inst[1])
    elif inst[0]=="pop":
        if not dq:
            print(-1)
        else:
            print(dq.popleft())
    elif inst[0] == "size":
        print(len(dq))
    elif inst[0] == "empty":
        if not dq:
            print(1)
        else:
            print(0)
    elif inst[0] == "front":
        if not dq:
            print(-1)
        else:
            print(dq[0])
    elif inst[0] == "back":
        if not dq:
            print(-1)
        else:
            print(dq[-1])