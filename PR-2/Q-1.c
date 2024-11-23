#include <stdio.h>
#include <conio.h>
main()
{
    int mark;
    char grade;
    // Step 1: Grade Calculation using a ternary operator
    printf("Enter Your Mark :");
    scanf("%d", &mark);
    
    // Step 2: Additional Comments using a switch-case statement
    switch (grade)
    {
    case 'A':
        printf(" Excellent work!");
        break;
    case 'B':
        printf(" Well done.");
        break;
    case 'C':
        printf(" Good job.");
        break;
    case 'D':
        printf(" You passed, but you could do better.");
        break;
    case 'E':
        printf(" you could do better.");
        break;
    case 'F':
        printf(" Sorry, you failed.");
        break;
    default:
        printf("Invalid Choice");
        break;
    }

    // Step 3: Eligibility Check using if-else statement
    if (grade >= 'A' && grade <= 'E')
    {
        printf(" You are eligible for the next level.\n");
    }
    else if (grade == 'F')
    {
        printf(" Please try again next time.\n");
    }
}