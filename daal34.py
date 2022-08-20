print("give me number")
number = int(input())
o_number = number
number_arr = []
max = 0
count = 0
while number>0:
    number_arr.append(number%10)
    number = int(number/10)
for x in range(len(number_arr)):
    if number_arr[x]>max:
     max = number_arr[x]
for x in range(len(number_arr)):
    if number_arr[x]==max:
        count+=1
print(f"{o_number}'s bigger digit is {max} and it is {count} in {o_number}")