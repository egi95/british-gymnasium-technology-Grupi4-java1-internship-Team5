# Program: classify a student's numeric grade (0–100) into categories

# 1. Read input and convert to integer
grade = int(input("Enter the student's grade (0–100): "))

# 2. Determine classification using if–elif–else
if grade >= 90 and grade <= 100:
    # grade is 90 or higher (but not above 100)
    classification = "Excellent"
elif grade >= 70:
    # grade is between 70 and 89 (since >= 90 was already tested)
    classification = "Good"
elif grade >= 50:
    # grade is between 50 and 69
    classification = "Average"
elif grade >= 0:
    # grade is below 50 but not negative
    classification = "Fail"
else:
    # handles invalid negative input
    classification = "Invalid grade (below 0)"

# 3. Print the result
print(f"Grade = {grade} → {classification}")
