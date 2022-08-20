print("Give me n")
n = int(input())
print("Top ball's color is:")
if n==0:
    print("none")
elif n%4==1:
    print("red")
elif n%4==2:
    print("yellow")
elif n%4==3:
    print("green")
elif n%4==0:
    print("blue")
