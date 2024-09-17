N = int(input())
front = 0
back = 0
queue = []

for i in range(N):
    inst = input();
    if inst[:4] == "push":
        x=inst[5:]
        queue.append(x)
        back+=1
    elif inst == "pop":
        if front==back:
            print(-1)
        else:
            print(queue[front])
            front+=1
    elif inst == "size":
        print(back-front)
    elif inst == "empty":
        if front==back:
            print(1)
        else:
            print(0)
    elif inst == "front":
        if front==back:
            print(-1)
        else:
            print(queue[front])
    elif inst == "back":
        if front==back:
            print(-1)
        else:
            print(queue[back-1])