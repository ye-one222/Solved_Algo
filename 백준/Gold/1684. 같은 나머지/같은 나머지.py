import sys
import math

input = sys.stdin.readline
N = int(input())
A = list(map(int,input().split()))
#혹시 모를 중복을 미리 set을 사용하여 제거#
A = list(set(A))
B = []
 
for i in range (0,len(A)-1):
    for j in range (i+1,len(A)):
        b = A[j] - A[i]
        B.append(b)
gcd = B[0]
for i in range (1,len(B)):
    gcd = math.gcd(gcd,B[i])

print(gcd)