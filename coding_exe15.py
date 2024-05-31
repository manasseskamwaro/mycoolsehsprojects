# to find maximum number from a list of numbers
# take input,do not use max,use for loop,use split function and range
numbers = input("Enter numbers seeperated by comma:")
split_numbers = numbers.split(',')
count = 0
for numbers in split_numbers:
    count = count + 1
# print(count)
for i in range(0,count):
    split_numbers[i]=int(split_numbers[i])
maximum_number = split_numbers[0]
for numbers in split_numbers:
    if numbers > maximum_number:
        maximum_number = numbers
print(f"Max no. is : {maximum_number}")