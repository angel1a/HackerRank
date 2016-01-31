import itertools
from itertools import *
input()
L = input().split()
K = int(input())
count = 0
L = list(combinations(L, K))
count = sum('a' in i for i in L)
print(count / len(L))
