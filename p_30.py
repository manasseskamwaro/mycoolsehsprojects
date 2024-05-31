# pizza order.smallsize=100,medium=200,large=300Rs.,pepperoni for small=30,large=50,extra cheese=20
bill = 0
print("Hi and welcome to online pizza order service,kindly place your order.")
order = (input("What size would you like to order (s,m/l)?"))
if order == 's':
    pepperoni = input("would you like pepperoni(y/n)?")
    if pepperoni == 'y':
        bill += 130
    else:
        bill += 100
elif order == 'm':
    bill += 200
else:
    bill += 300
    pepperoni = input("would you like pepperoni(y/n)")
    if pepperoni == 'y':
        bill += 50
    else:
        bill += 0
extra_cheese = input("would you like some extra cheese with the pizza(y/n)?")
if extra_cheese == 'y':
    bill = bill+20
print(f"Your final bill is {bill} thank you and have a lovely meal sir!")
