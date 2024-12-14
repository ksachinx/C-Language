#include<stdio.h>
void main(){
    char name [50];
    char *ptr = name;

    printf("Enter Any String :");
    scanf("%[^\n]", &name);

    int len = 0;

    while (*ptr != '\0')
    {
        len++;
        *ptr++;
    }
    printf("The length of the string is: %d\n", len);
}