import itertools
command = input().split()
command[0] = ''.join(sorted(list(command[0])))
for i in sorted(list(itertools.combinations_with_replacement(command[0], int(command[1])))):
    print(''.join(i))
