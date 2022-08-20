import datetime
from datetime import date
import calendar
print("Give me year")
year = int(input())
def first_weekend(year):
    day = 0
    for x in range(1,28):
        sun = datetime.date(year,2,x).weekday()
        if sun == 6:
            day = x
            break
    return x
print(f"{year}'s teacher day by old mongolian celebration at 2 month {first_weekend(year)} day" )
print(f"{year}'s teacher day at 10 month 5 day" )

