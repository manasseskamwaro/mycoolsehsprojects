weight=float(input("Enter weight in kg.:"))
height=float(input("Enter height in m.:"))

bmi=round(weight/height**2)
if bmi<18.5:
    print(f"Your BMI is {bmi} and you are underweight")
elif bmi<25:
    print(f"Your bmi is {bmi} and you have normal weight.")
elif bmi<30:
    print(f"Your bmi is {bmi} and you are overweight")
elif bmi<35:
    print(f"Your bmi is {bmi} and ypu are Obese")
else:
    print(f"Your bmi is {bmi} and you are clinically obese")