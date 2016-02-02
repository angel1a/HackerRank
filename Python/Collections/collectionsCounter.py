from collections import Counter
input()
L, ans = Counter(map(int, input().split())), 0
for _ in range(int(input())):
    command = list(map(int, input().split()))
    if L[command[0]]:
        L[command[0]] -= 1
        ans += command[1]
print(ans)
