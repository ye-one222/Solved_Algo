M = [0,'a','b','k','d','e','g','h','i','l','m','n','ng','o','p','r','s','t','u','w','y']
D = {}
m=[]
leng=[]
N = int(input())

for i in range(N):
    a = input()
    m.append(a)
    leng.append(len(a))
    
for v in m:
    k=''
    for j in range(len(v)):
        if(v[j]=='n' and (j+1)!=len(v)):
            if(v[j+1]=='g'):
                k+='12'
                v.replace('g', '', 1)
            else:
                k+='11'
        else:
            k+='{0:0>2}'.format(str(M.index(v[j])))
    l = '{0:0<'+str(max(leng)*2)+'}'
    D[v] = l.format(k)
    
D_s = sorted(D.values())
D = {v:k for k,v in D.items()}

for sort in D_s:
    print(D[sort])