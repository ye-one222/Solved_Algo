N=int(input())
answer=0

while N>1:
    answer+=N//5
    N=N//5

print(answer)