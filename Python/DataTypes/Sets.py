setA = input() == 0 or set(map(int, input().strip().split(' ')))
setB = input() == 0 or set(map(int, input().strip().split(' ')))
setC = sorted(list(setA.symmetric_difference(setB)))
for i in setC:
    print(i)
