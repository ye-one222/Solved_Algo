# 에라토스테네스의 체

M,N = map(int, input().split())
is_prime = [False, False] + [True]*(N-1)

for num in range(2, int(N**0.5)+1) :
    if is_prime[num]:
        for composite in range(2*num, N+1, num):
            is_prime[composite]=False

for i in range(M, N+1):
    if is_prime[i]:
        print(i)