N, K = map(int, input().split())

def fac(n):
    if n==1 :
        return 1
    elif n==0 :
        return 1
    else:
        return n*fac(n-1)
    
print(fac(N)//(fac(N-K)*fac(K)))