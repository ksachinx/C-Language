
#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}
int division(int num1, int num2)
{
    if (num2 != 0)
    {
        return num1 / num2;
    }
    else
    {
        printf("not divide by zero....");
        return 0;
    }
}
int modulas(int num1, int num2)
{
    return num1 % num2;
}
int main()
{

    int c;

    int d, e;

    for (int i = 0; i < 1; i++)
    {
        printf("\n\t enter 1 for + ");
        printf("\n\t enter 2 for - ");
        printf("\n\t enter 3 for * ");
        printf("\n\t enter 4 for / ");
        printf("\n\t enter 5 for %% ");
        printf("\n\t enter 0 for the exit  \n\n");
        printf("enter your choice:-");
        scanf("%d", &c);

        if (c == 0)
        {
            break;
        }
        else if (c >= 1 && c <= 5)
        {
            printf("enter the first number:-");
            scanf("%d", &d);
            printf("enter the second number:-");
            scanf("%d", &e);
        }
        switch (c)
        {
        case 1:
            printf("\n addition : %d & %d :- %d\n", d, e, add(d, e));
            break;
        case 2:
            printf("\n subtraction : %d & %d :- %d\n", d, e, subtraction(d, e));
            break;
        case 3:
            printf("\n multiplaction  : %d & %d :- %d\n\n", d, e, multiplication(d, e));
            break;
        case 4:
            printf("\n Division  : %d & %d :- %d\n\n", d, e, division(d, e));
            break;
        case 5:
            printf("\n Modulus  : %d & %d :- %d\n\n", d, e, modulas(d, e));
            break;
        default:
            printf("\n\n Invalid choice !>!.. please try again...\n");
        }
    }
}
