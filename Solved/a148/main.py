try:
    while (True):
        a = input().split(" ")
        summary = 0.0
        for i in a[1:]:
            summary += int(i)
        if (summary/int(a[0]) <= 59):
            print("yes")
        else:
            print("no")
except EOFError as e:
    pass