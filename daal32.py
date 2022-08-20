print("give me n")
n = int(input())
print("give me m")
m = int(input())
if m%10> n%10:
    print(f"{m}'s 1 place bigger than {n}'s 1 place: {m%10} > {n%10}")
elif m%10< n%10:
    print(f"{n}'s 1 place bigger than {m}'s 1 place: {n%10} > {m%10}")