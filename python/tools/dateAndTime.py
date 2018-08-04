import time as t
import calendar
import datetime
import pytz
# import dateutil


# since 12:00am, January 1, 1970(epoch)
seconds = t.time() # give seconds after above date 
print(seconds)
print(t.localtime())

# in formatted form
curr_time = t.asctime(t.localtime())
print(curr_time)

# show month calender
cal = calendar.month(2018,8)
print(cal)

# clock()
print(t.process_time())

# sleep()
t.sleep(1)

print("I am back after 1 sec")

# firstweekday()
cal = calendar.firstweekday()
print(cal)

# isleapyear()
yr = calendar.isleap(1256)
print(yr)

# leapdays()  : count leap days between two years
days = calendar.leapdays(2000,2008)
print(days)

# monthcalender()
cal = calendar.monthcalendar(2018,8)
print(cal)