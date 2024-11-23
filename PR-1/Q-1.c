#include<stdio.h>
#include<conio.h>
main(){
    float fahrenheit, celsius;
    printf("Enter value of Celsius:");
    scanf("%f", &celsius);
    fahrenheit=(celsius*9/5) + 32;
    printf("%f", fahrenheit);
}
