import itertools
A = map(int, input().split())
B = map(int, input().split())
print(' '.join(map(str, list(itertools.product(A, B)))))
