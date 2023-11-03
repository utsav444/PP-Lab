def create_phonebook(n):
    phonebook = {}
    for _ in range(n):
        name = input("Enter name: ")
        while True:
            number = input("Enter phone number (10 digits): ")
            if len(number) == 10 and number.isdigit():
                break
            else:
                print("Invalid number.Enter a 10-digit number.")
        phonebook[number] = name
    return phonebook

def search_name_by_number(phonebook, search_number):
    if search_number in phonebook:
        return phonebook[search_number]
    else:
        return "Number not found in the phonebook."

def main():
    n = int(input("Enter the number of entries: "))
    phonebook = create_phonebook(n)

    search_number = input("Enter a number to search: ")
    if len(search_number) != 10 or not search_number.isdigit():
        print("Not a valid 10-digit number.")
    else:
        result = search_name_by_number(phonebook, search_number)
        print("Name:", result)

if __name__ == "__main__":
    main()
