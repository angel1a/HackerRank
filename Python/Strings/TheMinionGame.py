X, Y, S = 0, 0, input()
for i in range(len(S)):
    if S[i] in 'AEIOU':
        X += len(S) - i
    else:
        Y += len(S) - i
if Y > X:
    print('Stuart', Y)
elif X > Y:
    print('Kevin', X)
else:
    print('Draw')
