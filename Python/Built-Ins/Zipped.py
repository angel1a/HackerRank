N, X = map(int, input().split())
L = []
for _ in range(X):
    L.append(list(map(float, input().split())))
print(L)
L = zip(*L)
for i in L:
    print('{:.1f}'.format(sum(i) / X))
