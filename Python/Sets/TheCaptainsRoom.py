input()
S1, S2 = set(), set()
for i in map(int, input().split()):
    if i in S1:
        S2.add(i)
    else:
        S1.add(i)
S1 -= S2
for i in S1:
    print(i)
