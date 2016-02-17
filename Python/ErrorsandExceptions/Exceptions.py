for _ in range(int(input())):
    try:
        a, b = map(int, input().split())
        print(a // b)
    except (ZeroDivisionError, ValueError) as err:
        print("Error Code: " + str(err))
