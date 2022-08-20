import datetime
from datetime import date
import calendar
print("Give me year")
year = int(input())
def calendar_creater(year):
    for x in range(1,13):
        print(f"{calendar.month_name[x]} {year}:")
        print("---------------------------------")
        print("Sun  Mon  Tue  Wed  Thu  Fri  Sat")
        if datetime.date(year,x,1).weekday() <6:
            for xy in range(datetime.date(year,x,1).weekday()+1):
                print(end='     ', flush=True)
        for y in range(1,calendar.monthrange(year,x)[1]+1):
            if y<10:
                print(y,end='    ', flush=True)
            else:
                print(y,end='   ', flush=True)
            if datetime.date(year,x,y).weekday() == 5 and (
                datetime.date(year,x,calendar.monthrange(year,x)[1]).weekday() != 5 or y != calendar.monthrange(year,x)[1] ):
                print()
        print("")
        print("_________________________________")
calendar_creater(year)
