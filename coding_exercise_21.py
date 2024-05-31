# number of cans to paint wall=1 can =7 m^2
# no of cans = h * w /average round the number-ceil()h
import math
def paint_calculation(height,width,cover):
    area = height * width
    no_of_cans = math.ceil(area/cover)

    print(f"You will need {no_of_cans} cans of paint")

h= int(input("Enter the height of the wall in meters:\n"))
w = int(input("Enter the width of the wall in meters:\n"))
coverage = 7
paint_calculation(width=w,height=h,cover=coverage)