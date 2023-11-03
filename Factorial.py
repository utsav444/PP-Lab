a = int(input("Enter 1st Number"))
b = int(input("Enter 2nd Number"))
c = int(input("Enter 3rd Number"))

if a > b and a > c:
  print("A is the greatest.")
  largest = a
elif b > c and b > a:
  print("B is the greatest.")
  largest = b
else:
  print("C is the greatest.")
  largest = c

# Function to calculate factorial
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

# Calculate and print the factorial of the largest number
factorial_of_largest = factorial(largest)
print(f"The factorial of the largest number ({largest}) is {factorial_of_largest}")