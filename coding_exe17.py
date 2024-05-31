# fizzbuzz job interview question
# numbers divisible by 3 = fizz,5=buzz,fizzbuzz=3
for i in range(1,101):
    if i%3 == 0 and i%5 == 0:
        print('fizzbuzz')
    elif i%3 == 0:
        print('fizz')
    elif i%5 == 0:
        print('Buzz')
    else:
        print(i)


