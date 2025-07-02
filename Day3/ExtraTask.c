# Program to compare two numbers input by the user

# Function to safely get a number from user input
def get_number(prompt):
    while True:
        user_input = input(prompt)  # ask user for input
        try:
            # try converting input to a float (handles decimals)
            return float(user_input)
        except ValueError:
            # if conversion fails, print error and retry
            print("❌ Invalid input! Please enter a valid number.")

# 1. Get two validated numbers from the user
num1 = get_number("Enter the first number: ")
num2 = get_number("Enter the second number: ")

# 2. Compare the two numbers
if num1 > num2:
    # num1 is larger
    result_message = f"✅ {num1} is greater than {num2}."
elif num1 < num2:
    # num2 is larger
    result_message = f"✅ {num2} is greater than {num1}."
else:
    # both numbers are equal
    result_message = f"✅ Both numbers are equal (you entered {num1})."

# 3. Show the personalized result to the user
print(result_message)

