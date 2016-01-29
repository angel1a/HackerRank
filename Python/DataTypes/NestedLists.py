L = []
for _ in range(int(input())):
    L.append([input(), float(input())])
score = sorted(list(set([mark for name, mark in L])))[1]
print('\n'.join([name for name, mark in sorted(L) if mark == score]))
