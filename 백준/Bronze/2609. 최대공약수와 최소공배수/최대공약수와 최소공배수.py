a, b = map(int, input().split())

lcm = 0
gcf = 0

if a > b :
    a, b = b, a

a_div_list = []
for i in range(a, 0, -1):
    if a%i == 0:
        a_div_list.append(i)
for j in a_div_list:
    if b%j == 0:
        lcm = j
        break

gcf = lcm * (a//lcm) * (b//lcm)

print(lcm)
print(gcf)