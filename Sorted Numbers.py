class NumberManager:
    def __init__(self):
        self.numbers = []

    def read_data(self, n):
        for _ in range(n):
            num = float(input("Enter a number: "))
            self.numbers.append(num)

    def sort_data(self):
        self.numbers.sort()

    def display_data(self):
        print("Sorted numbers:", self.numbers)

if __name__ == "__main__":
    try:
        N = int(input("Enter the number of entries: "))
        if N <= 0:
            print("Invalid input. Please enter a positive number.")
        else:
            num_manager = NumberManager()
            num_manager.read_data(N)
            num_manager.sort_data()
            num_manager.display_data()
    except ValueError:
        print("Invalid input. Please enter a valid number.")