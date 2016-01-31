input()
A = set(map(int, input().split()))
for _ in range(int(input())):
    command = input().split()
    if command[0] == 'intersection_update':
        A &= set(map(int, input().split()))
    elif command[0] == 'update':
        A |= set(map(int, input().split()))
    elif command[0] == 'symmetric_difference_update':
        A ^= set(map(int, input().split()))
    elif command[0] == 'difference_update':
        A -= set(map(int, input().split()))
print(sum(A))
