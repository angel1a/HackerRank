from collections import deque
D = deque()
for _ in range(int(input())):
    command = input().split()
    if command[0] == 'append':
        D.append(int(command[1]))
    elif command[0] == 'appendleft':
        D.appendleft(int(command[1]))
    elif command[0] == 'pop':
        D.pop()
    elif command[0] == 'popleft':
        D.popleft()
print(' '.join(map(str, D)))
