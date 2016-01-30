stringA = input()
command = input().split(' ')
print(stringA[:int(command[0])] + command[1] + stringA[int(command[0]) + 1:])
