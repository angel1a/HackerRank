from collections import Counter
C = sorted(Counter(input()).items(), key = lambda x: (-x[1], x[0]))[:3]
print('\n'.join(i[0] + ' ' + str(i[1]) for i in C))
