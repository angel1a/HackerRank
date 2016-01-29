from __builtin__ import hash
print(input() == 0 or hash(tuple(map(int, raw_input().strip().split(' ')))))
