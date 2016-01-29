L = input() == 0 or set(map(int, input().split(' ')))
x = max(L)
L.remove(x)
print(max(L))
