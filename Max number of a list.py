def find_max_number(numbers):
    if not numbers:
        return None
    return max(numbers)

if __name__ == "__main__":
    input_list = input("Enter a list of numbers separated by spaces: ")
    num_list = [int(num) for num in input_list.split()]
    max_number = find_max_number(num_list)

    if max_number is not None:
        print("The maximum number in the list is:", max_number)
    else:
        print("The list is empty.")