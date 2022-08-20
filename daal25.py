print("Give me total mans number")
n = int(input())
print("Give me m")
m = int(input())
print("Give me your position")
postion = int(input())
for x in range(1,n+1,m):
    if postion == x:
        print("you died")
        break
else:
    print("you are alive")