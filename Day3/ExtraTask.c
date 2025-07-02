#include <stdio.h>

int main() {
    double num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");

    // Check if the input is a valid number
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input! Please enter a valid number.\n");
        return 1; // Exit the program with an error code
    }

    // Prompt the user to enter the second number
    printf("Enter the second number: ");

    // Check if the second input is a valid number
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input! Please enter a valid number.\n");
        return 1; // Exit the program with an error code
    }

    // Compare the two numbers using comparison operators
    if (num1 > num2) {
        // If the first number is greater than the second
        printf("Result: %.2f is greater than %.2f\n", num1, num2);
    } else if (num2 > num1) {
        // If the second number is greater than the first
        printf("Result: %.2f is greater than %.2f\n", num2, num1);
    } else {
        // If both numbers are equal
        printf("Result: Both numbers are equal (%.2f = %.2f)\n", num1, num2);
    }

    return 0;
}


