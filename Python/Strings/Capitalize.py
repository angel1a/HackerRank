S = input()
for s in S.split(' '):
    S = S.replace(s, s.capitalize())
print(S)
