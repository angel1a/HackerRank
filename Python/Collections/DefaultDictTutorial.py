from collections import defaultdict
N, M = map(int, input().split())
L = defaultdict(list)
for i in range(1, N + 1):
    L[input()].append(i)
for _ in range(M):
    tmp = input()
    if len(L[tmp]):
        print(' '.join([str(i) for i in L[tmp]]))
    else:
        print(-1)
