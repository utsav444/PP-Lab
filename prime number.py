def is_prime(number):
    if number <= 1:
        return 0

    if number <= 3:
        return 1

    if number % 2 == 0 or number % 3 == 0:
        return 0

    i = 5
    while i * i <= number:
        if number % i == 0 or number % (i + 2) == 0:
            return 0
        i += 6

    return 1

number = int(input("Enter a number: "))
result = is_prime(number)
if result == 1:
    print("It is a prime number.")
else:
    print("It is not a prime number.")