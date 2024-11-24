import sys

st1 = sys.stdin.readline().strip()
st2 = sys.stdin.readline().strip()
arr = [[0] * (len(st1)+1) for _ in range(len(st2)+1)]

for j in range(1, len(st2)+1):
    for i in range(1, len(st1)+1):
        if st1[i-1] == st2[j-1]:
            arr[j][i] = arr[j-1][i-1]+1
        else:
            arr[j][i] = max(arr[j-1][i], arr[j][i-1])

print(max(map(max, arr)))