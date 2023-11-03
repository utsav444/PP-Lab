def reverse_int(num):
    reversed_num = 0
    is_negative = False

    if num < 0:
        is_negative = True
        num = abs(num)

    while num != 0:
        remainder = num % 10
        reversed_num = reversed_num * 10 + remainder
        num //= 10

    if is_negative:
        reversed_num = -reversed_num


    return reversed_num

user_input = int(input("Enter an integer: "))
reversed_int = reverse_int(user_input)
print("Reversed integer:", reversed_int)