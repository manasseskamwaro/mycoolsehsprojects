# prime numbers or not

def prime_checker(number):
    is_prime = True
    if number==1:
        is_prime=False
    for i in range(2,number):
        if number % i == 0:
            is_prime = False
    if is_prime==True:
        print("It is prime number!")
    else:
        print("Not a prime number")
n = int(input("Enter a number:\n"))
prime_checker(n)