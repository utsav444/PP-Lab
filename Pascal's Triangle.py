def generate_pascal_triangle(n):
    triangle = []
    for i in range(n):
        row = [1] * (i + 1)
        if i > 1:
            prev_row = triangle[i - 1]
            for j in range(1, i):
                row[j] = prev_row[j - 1] + prev_row[j]
        triangle.append(row)
    return triangle

def print_pascal_triangle(triangle):
    max_width = len(' '.join(map(str, triangle[-1])))  # Calculate the width of the last row
    for row in triangle:
        spaces = (max_width - len(' '.join(map(str, row))) + 1) // 2  # Calculate leading spaces to center-align
        print(' ' * spaces + ' '.join(map(str, row)))

n = int(input("Enter the number of rows for Pascal's Triangle: "))
pascal_triangle = generate_pascal_triangle(n)
print_pascal_triangle(pascal_triangle)
