import itertools
command = input().split()
for i in sorted(list(itertools.permutations(str(command[0]), int(command[1])))):
    print(''.join(i))
