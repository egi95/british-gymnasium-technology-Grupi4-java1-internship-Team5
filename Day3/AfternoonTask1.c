# Program to classify a number as positive, zero, or negative

# 1. Read input number (you can replace this with any integer for testing)
num = int(input("Enter an integer: "))

# 2. Check if number is positive
if num > 0:
    # This block runs when num is greater than zero
    print(f"{num} is positive")
# 3. Else if the number is exactly zero
elif num == 0:
    # This block runs only when num equals zero
    print(f"{num} is zero")
# 4. Else (the number must be negative)
else:
    # Covers all cases where num < 0
    print(f"{num} is negative")

