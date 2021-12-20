row = int(input())

for vol in range(row):
    a = map(int, input().split(" "))
    a = [i for i in a]
    if a[3]-a[2] == a[2]-a[1]:
        a.append(int(a[3]+(a[3]-a[2])))
        result = str()
        for i in a:
            result += f"{i} "
        print(result)
    elif a[3]-a[2] != a[2]-a[1]:
        a.append(int(a[3]*a[3]/a[2]))
        result = str()
        for i in a:
            result += f"{i} "
        print(result)