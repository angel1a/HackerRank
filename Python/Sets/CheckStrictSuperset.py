S = set(map(int, input().split()))
flag = True
for _ in range(int(input())):
    s = set(map(int, input().split()))
    if not (len(S & s) == len(s) and len(S - s)):
        flag = False
print(flag)
