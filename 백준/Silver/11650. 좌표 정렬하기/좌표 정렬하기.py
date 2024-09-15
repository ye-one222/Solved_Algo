N=int(input())
nlist=[]
for i in range(N):
    a,b=map(int,input().split())
    nlist.append([a,b])

nlist.sort()

for i in range(N):
    print(nlist[i][0], nlist[i][1])