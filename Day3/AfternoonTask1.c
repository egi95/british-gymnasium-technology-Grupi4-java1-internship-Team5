#include <stdio.h>

int main() {
    int number = 5;

    // Using if, else if, and else
    if (number > 10) {
        printf("The number is greater than 10\n");
    } else if (number == 10) {
        printf("The number is exactly 10\n");
    } else {
        printf("The number is less than 10\n");
    }

    // Using switch statement
    switch (number) {
        case 1:
            printf("Number is One\n");
            break;
        case 5:
            printf("Number is Five\n");
            break;
        case 10:
            printf("Number is Ten\n");
            break;
        default:
            printf("Number is not 1, 5, or 10\n");
    }

    // Using ternary operator
    // condition ? true_result : false_result
    const char* result = (number % 2 == 0) ? "Even" : "Odd";
    printf("The number is %s\n", result);

    return 0;
}

//Detyra 2 
#include <stdio.h>

int main() {
    int number;

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if number is positive, zero, or negative
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number == 0) {
        printf("The number is zero.\n");
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}

//Detyar 3 
#include <stdio.h>

int main() {
    int number; // Declare an integer variable to store user input

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number); // Read the input number from the user

    // Start of control structure
    if (number > 0) {
        // This block executes if the number is greater than zero
        printf("The number is positive.\n");
    } else if (number == 0) {
        // This block executes if the number is exactly zero
        printf("The number is zero.\n");
    } else {
        // This block executes if the number is less than zero
        printf("The number is negative.\n");
    }
    // End of control structure

    return 0; // Exit the program
}

//Detyra 4 
#include <stdio.h>

int main() {
    int number; // Declare an integer variable to store user input

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number); // Read the input number from the user

    // Start of control structure
    if (number > 0) {
        // This block executes if the number is greater than zero
        printf("The number is positive.\n");
    } else if (number == 0) {
        // This block executes if the number is exactly zero
        printf("The number is zero.\n");
    } else {
        // This block executes if the number is less than zero
        printf("The number is negative.\n");
    }
    // End of control structure

    return 0; // Exit the program
}

//Detyra 5
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number == 0) {
        printf("The number is zero.\n");
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}


//From 14:00
#include <stdio.h>

int main() {
    int grade;

    // Ask the user to enter the student's grade
    printf("Enter the student's grade (0-100): ");
    scanf("%d", &grade);

    // Check if the grade is between 90 and 100 (inclusive)
    if (grade >= 90 && grade <= 100) {
        printf("Classification: Excellent\n");
    }
    // Check if the grade is between 70 and 89 (inclusive)
    else if (grade >= 70 && grade <= 89) {
        printf("Classification: Good\n");
    }
    // Check if the grade is between 50 and 69 (inclusive)
    else if (grade >= 50 && grade <= 69) {
        printf("Classification: Average\n");
    }
    // Check if the grade is below 50
    else if (grade >= 0 && grade < 50) {
        printf("Classification: Fail\n");
    }
    // Handle invalid input (grade not in 0–100 range)
    else {
        printf("Invalid input! Please enter a grade between 0 and 100.\n");
    }

    return 0;
}

