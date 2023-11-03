rows = int(input("Enter the number of rows: "))
print()

for i in range(rows):
    val = 1
    for j in range(1, rows - i):
        print("   ", end="")
    for k in range(i + 1):
        print(f"      {val}", end="")
        val = val * (i - k) // (k + 1)
    print("\n")

print()

