above_number = []
number = 100
while len(above_number) <=10:
    if number%10 ==7 and number%9==0:
        above_number.append(number)
    number +=1 
print(f"first 10 number that last digit is 7 and number%9 = 0:{above_number}")
