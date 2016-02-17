import re
for _ in range(int(input())):
    result = True;
    try:
        re.compile(input())
    except re.error:
        result = False;
    print(result)
