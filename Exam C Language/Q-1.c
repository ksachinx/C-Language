#include <stdio.h>
main() {
    float marks1, marks2, marks3, marks4, marks5, sum, average;
    int grade;
    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &marks4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &marks5);
    sum = marks1 + marks2 + marks3 + marks4 + marks5;
    average = sum / 5.0;
    printf("\nThe average marks are: %.2f\n", average);
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("The grade is: %c\n", grade);
}
