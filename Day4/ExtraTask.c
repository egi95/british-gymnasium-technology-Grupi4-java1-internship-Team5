#include <stdio.h>

int main() {
    // Declare an array to store 5 integers
    int numbers[5];
    
    // Declare variables for loop, max value, and sum
    int i, max, sum = 0;

    // ---------------------------
    // FOR LOOP: Used to input values into the array
    // 'for' is ideal here because we know the number of repetitions in advance (5)
    // ---------------------------
    for (i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);  // Read and store values into the array
    }

    // ---------------------------
    // FOR LOOP: Used to print array values
    // Efficiently iterates over each array element to display them
    // ---------------------------
    printf("\nYou entered: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // ---------------------------
    // WHILE LOOP: To find the largest number in the array
    // 'while' is used to show conditional repetition, useful when processing until a certain condition is met
    // ---------------------------
    i = 1;                // Start from second element
    max = numbers[0];     // Assume first is the max initially
    while (i < 5) {
        if (numbers[i] > max) {
            max = numbers[i];     // Update max if a larger value is found
        }
        i++;
    }
    printf("The largest number is: %d\n", max);

    // ---------------------------
    // DO-WHILE LOOP: To calculate the sum of the array elements
    // 'do-while' ensures the loop runs at least once, useful for running code before checking condition
    // ---------------------------
    i = 0;
    do {
        sum += numbers[i];   // Add each number to sum
        i++;
    } while (i < 5);
    
    printf("The sum of all numbers is: %d\n", sum);

    return 0;
}

