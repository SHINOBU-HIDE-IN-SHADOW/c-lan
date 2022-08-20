print("give me a number")
number = int(input())
pact = 1
for x in range(1,number+1):
    pact *= x
print(f"{number}! = {pact}")