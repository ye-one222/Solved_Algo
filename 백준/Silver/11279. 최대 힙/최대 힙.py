import sys
import heapq

hq = []

N = int(input())

for i in range(N):
    x = int(sys.stdin.readline())
    if x>0:
        heapq.heappush(hq, x*(-1))
    else:
        if not hq:
            print(0)
        else:
            print(heapq.heappop(hq)*(-1))