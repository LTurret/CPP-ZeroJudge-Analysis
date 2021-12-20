handle = input().split(" ")

M, D = int(handle[0]), int(handle[1])

S = (M*2+D)%3

if S == 0:
    print("普通")
elif S == 1:
    print("吉")
elif S == 2:
    print("大吉")