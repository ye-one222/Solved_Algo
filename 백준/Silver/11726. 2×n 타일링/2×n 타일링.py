n = int(input())
D = []

#D[0]=0
D.append(0)
#D[1]=1
D.append(1)
#D[2]=2
D.append(2)

for i in range(3,n+1):
    D.append((D[i-1]+D[i-2])%10007)
print(D[n])