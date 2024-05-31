# how many days,weeks,months,years we have left if we die at 90.input current age
# output-you have x days,y weeks,z months,a years
# 1year=365 days,1 year=52 weeks,1 year=12months
age=int(input("Enter your age: "))
years_left=90-age
days_left=years_left*365
months_left=years_left*12
weeks_left=years_left*52

print(f"You have {days_left} days,{weeks_left} weeks and {months_left} months,{years_left}years")
