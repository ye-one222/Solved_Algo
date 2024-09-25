from collections import deque

N,M,V = map(int, input().split())
adj_list = [[] for _ in range(N+1)]
# 아래처럼 하면 [[]]이 됨!!
# adj_list = [[] * (N+1)]
is_visited = [False] * (N+1)
# 아래처럼 하면 [False]가 됨!!
# is_visited = [False*(N+1)]

def dfs(start):
    print(start, end=" ")
    is_visited[start] = True
    for i in range(len(adj_list[start])):
        nxt = adj_list[start][i]
        if is_visited[nxt]:
            continue
        dfs(nxt)

def bfs(start):
    is_visited = [False] * (N+1)
    q = deque()
    
    q.append(start)
    is_visited[start] = True
    
    while q:
        cur = q.popleft()
        print(cur, end=" ")
        for i in enumerate(adj_list[cur]):
            nxt = i[1]
            if is_visited[nxt]:
                continue
            q.append(nxt)
            is_visited[nxt] = True

for _ in range(M):
    a,b = map(int, input().split())
    adj_list[a].append(b)
    adj_list[b].append(a)
    
for arr in adj_list:
    arr.sort()
    
dfs(V)
print()
bfs(V)