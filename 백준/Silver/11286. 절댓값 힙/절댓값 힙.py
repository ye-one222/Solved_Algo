import heapq
import sys

N = int(input())
heap = []    # 최소힙, 각 원소 : (절댓값, 실제값값)
for _ in range(N):
    x = int(sys.stdin.readline())
    if x==0:
        if not heap:
            print(0)
        else:
            min_abs = heapq.heappop(heap)
            print(min_abs[1])
    else:
        heapq.heappush(heap, (abs(x),x))