while 1 :
    a=input()
    isPel=True
    
    if a=="0" :
        break
    leng=len(a)
    for i in range(leng//2) :
        if a[i]!=a[leng-i-1] :
            isPel=False
            break
        
    if isPel :
        print("yes")
    else :
        print("no")