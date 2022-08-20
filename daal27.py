import datetime
from datetime import date
import calendar
print("Give me year")
year = int(input())
count = 0
while True:
    print("Give me month")
    month = int(input())
    if month<=12:
        break
    if count == 10:
        raise ValueError
    count +=1
count = 0
while True:
    print("Give me day")
    day = int(input())
    if day<=31:
        break
    if count == 10:
        raise ValueError
    count +=1
try:
    print(datetime.date(year,month,day))
    wday = datetime.date(year,month,day).weekday()
    print(calendar.day_name[wday])
except ValueError:
    print(f"{year}-{month}-{day} is invalid")