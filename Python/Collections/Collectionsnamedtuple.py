n, index, ans = int(input()), input().split().index('MARKS'), 0
for _ in range(n):
    ans += int(input().split()[index])
print(ans / n)
