import sys

tc = int(input())
D = []

#초깃값 세팅
D.append(0)
D.append(1)
D.append(2)
D.append(4)

for i in range(4,11):
    D.append(D[i-1]+D[i-2]+D[i-3])

for i in range(tc):
    n = int(sys.stdin.readline())
    print(D[n])