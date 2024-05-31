# 1d=24hrs,1 year=12moths,52 weeks,365 days
age=int(input("Enter your current age: "))
years_left=90-age
months_left=years_left*12
weeks_left=years_left*52
days_left=years_left*365
hours_left=days_left*24
print(f"You have {years_left} years,{months_left} months,{weeks_left} weeks,{days_left} days,{hours_left} hours,utilize them")