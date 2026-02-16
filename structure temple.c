#include <stdio.h>
#include <string.h> // Required for strcpy()

// Define the structure template
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    // Declare a structure variable named 's1'
    struct Student s1;

    // Assign values to the structure members using the dot (.) operator
    s1.roll_no = 101;
    // Use strcpy() to assign strings to character arrays
    strcpy(s1.name, "Amit"); 
    s1.marks = 92.5;

    // Display the values of the structure members
    printf("Student ID: %d\n", s1.roll_no);
    printf("Student Name: %s\n", s1.name);
    printf("Student Marks: %.2f\n", s1.marks);

    return 0;
}