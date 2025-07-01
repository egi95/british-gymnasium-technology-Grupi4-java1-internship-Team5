#include <stdio.h>

    #include <stdio.h>           // Include standard I/O library

int main(void) {
    printf("+-------+\n");   // Print top border: +---…---+
    printf("| \\ N / |\n"); // Print first initial line, escaping backslashes
    printf("|  \\/  |\n");  // Second initial line
    printf("|  /K\\  |\n");  // Third initial line
    printf("| /   \\ |\n"); // Decorative empty line
    printf("+-------+\n");   // Print bottom border
    return 0;                // Exit program
}

/*
# Initialize a local repo
git init                              # Create a new Git repository
git add initials_box.c                # Stage your C file
git commit -m "Add program to print initials in a box"  
# Push to GitHub (simulated)
git remote add 
git push -u origin main
*/
