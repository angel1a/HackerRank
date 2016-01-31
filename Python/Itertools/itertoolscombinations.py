import itertools
command = input().split()
command[0] = ''.join(sorted(list(command[0])))
for i in range(1, int(command[1]) + 1):
    for j in sorted(list(itertools.combinations(command[0], i))):
        print(''.join(j))
