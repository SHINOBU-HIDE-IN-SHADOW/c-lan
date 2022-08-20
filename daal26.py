import datetime
from datetime import date
import calendar
print("Give me year")
year = int(input())
print("Give me month")
month = int(input())
print("Give me day")
day = int(input())
def day_calculater(year,month,day):
    till_end = 0
    for x in range(month,13):
        print(f"{x} months {calendar.monthrange(year,x)[1]}")
        till_end += calendar.monthrange(year,x)[1]
    return till_end - day
try:
    print(datetime.date(year,month,day),"is valid")
    print(f"from {year}-{month}-{day} till end of year:{day_calculater(year,month,day)}")
except ValueError:
    print(f"{year}-{month}-{day} is invalid")
