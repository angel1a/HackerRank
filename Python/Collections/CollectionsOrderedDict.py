from collections import OrderedDict
D = OrderedDict()
for _ in range(int(input())):
    command = input().rpartition(' ')
    D[command[0]] = D.get(command[0], 0) + int(command[2])
for i in D:
    print(i, D[i])
