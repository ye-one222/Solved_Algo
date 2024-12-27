N = int(input())
T_list = list(map(int, input().split()))
T, P = map(int, input().split())

T_cnt = 0
for i in range(6):
    if T_list[i] % T == 0:
        T_cnt += T_list[i] // T
    else:
        T_cnt += T_list[i] // T + 1
print(T_cnt)

P_cnt = N // P
one_cnt = N % P
print(P_cnt, end=" ")
print(one_cnt)