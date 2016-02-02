from collections import OrderedDict
D = OrderedDict()
for _ in range(int(input())):
    command = input()
    D[command] = D.get(command, 0) + 1
print(len(D))
print(' '.join([str(D[i]) for i in D]))
