n, m = map(int, input().split())
N, X, Y, ans = input().split(), set(input().split()), set(input().split()), 0
for i in N:
    if i in X:
        ans += 1
    if i in Y:
        ans -= 1
print(ans)
