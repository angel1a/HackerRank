import string
n = int(input())
alphabet = string.ascii_lowercase
for i in range(0, n - 1):
    L = ['-' * (2 * n - 3 - 2 * i)]
    for j in range(n - 1, n - i - 1, -1):
        L.append(alphabet[j])
    for j in range(n - i - 1, n):
        L.append(alphabet[j])
    L.append('-' * (2 * n - 3 - 2 * i))
    print('-'.join(L))
L = []
for i in range(n - 1, - 1, -1):
    L.append(alphabet[i])
for i in range(1, n):
    L.append(alphabet[i])
print('-'.join(L))
for i in range(n - 2, -1, -1):
    L = ['-' * (2 * n - 3 - 2 * i)]
    for j in range(n - 1, n - i - 1, -1):
        L.append(alphabet[j])
    for j in range(n - i - 1, n):
        L.append(alphabet[j])
    L.append('-' * (2 * n - 3 - 2 * i))
    print('-'.join(L))
