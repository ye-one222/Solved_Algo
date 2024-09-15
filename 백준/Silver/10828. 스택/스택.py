cnt=int(input())
stack=[]

for i in range(cnt):
    inst=input()
    if inst[0:4]=="push":
        x=int(inst[5:])
        stack.append(x)
    elif inst=="pop":
        if not stack:
            print(-1)
        else:
            print(stack[-1])
            stack.pop()
    elif inst=="size":
        print(len(stack))
    elif inst=="empty":
        if not stack:
            print(1)
        else:
            print(0)
    else : #inst=="top"
        if not stack:
            print(-1)
        else:
            print(stack[-1])