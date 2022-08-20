numbers = []
number = 1
adder = 0
last = 0
while len(numbers) <= 50:
    number += adder
    numbers.append(number)
    adder = last
    last = number
print(f"fibonacci's first 50 numbers:\n{numbers}")