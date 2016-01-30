X, Y, ans = input(), input(), 0
for i in range(len(X) - len(Y) + 1):
    if (X[i : i + len(Y)] == Y):
        ans += 1
print(ans)
