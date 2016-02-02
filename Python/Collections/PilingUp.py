from collections import deque
for _ in range(int(input())):
    blank, minlen, flag = input(), (1 << 32), True
    D = deque(list(map(int, input().split())))
    while len(D):
        if D[0] > D[-1]:
            tmp = D.popleft()
        else:
            tmp = D.pop()
        if tmp > minlen:
            flag = False
            break
        minlen = tmp
    print('Yes' if flag else 'No')
