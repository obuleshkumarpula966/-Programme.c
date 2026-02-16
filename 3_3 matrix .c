#include <stdio.h>

int main() {
    // Declare a 3x3 integer matrix
    int matrix[3][3];
    int i, j;

    printf("Enter elements of 3x3 matrix:\n");

    // Input values into the matrix using nested loops
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("element - [%d],[%d] : ", i, j);
            // Use scanf to read user input for each element
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 3x3 matrix is:\n");

    // Display the matrix in a formatted way using nested loops
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            // Use printf with a tab (\t) for better column formatting
            printf("%d\t", matrix[i][j]);
        }
        // Print a newline character after each row
        printf("\n");
    }

    return 0;
}