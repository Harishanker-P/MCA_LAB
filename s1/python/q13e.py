# Q. display leap years from current year to a future year entered by the user.

#inputing the current year
cYear=int(input("enter the current year: "))
#inputing the future year
fYear=int(input("Enter the future year: "))

#finding the leap years and storing it in a list 
leapYear=[year for year in range(cYear,fYear) if year %4 ==0 and (year %400 or year % 100 !=0)]

print("The Leap years are:",leapYear)
