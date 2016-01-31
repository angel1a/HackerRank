import itertools
from itertools import *
K, M= map(int, input().split())
L = []
for _ in range(K):
    L.append(map(lambda x: x ** 2, map(int, input().split()[1:])))
print(max(map(lambda x: x % M, map(sum, product(*L)))))
