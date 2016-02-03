n, L = input(), list(map(int, input().split()))
print(all(i >= 0 for i in L) and any(j == int(str(j)[::-1]) for j in L))
