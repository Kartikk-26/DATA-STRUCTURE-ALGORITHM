//THIS IS THE CODE IN WHICH WE READ THE WHOLE LINE IN NAME AND BRANCH 
#include <stdio.h>

int main() {
    int roll_no;
    char name[30];
    char branch[40];
    int batch;

    // Taking inputs
    printf("Enter the Roll Number of Student: ");
    scanf("%d", &roll_no);

    printf("Enter Name of Student: ");
    scanf(" %[^\n]s", name); // Read the whole line, including spaces

    printf("Enter Branch of Student: ");
    scanf(" %[^\n]s", branch); // Read the whole line, including spaces

    printf("Enter Batch of Student: ");
    scanf("%d", &batch);

    // Displaying details of the student
    printf("\nStudent details are:\n");

    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Branch: %s\n", branch);
    printf("Batch: %d\n", batch);

    return 0;
}
