n, m = map(int, input().split())
L = []
for _ in range(n):
    L.append(list(map(int, input().split())))
k = int(input())
L = sorted(L, key = lambda x: x[k])
for i in L:
    print(' '.join(map(str, i)))
