#include<stdio.h>
#include<conio.h>
main(){
    int hra, da, ta, ans;
    printf("Enter Value Of Hra :\t");
    scanf("%d", &hra);
    printf("Enter Value Of Da :\t");
    scanf("%d", &da);
    printf("Enter Value Of Ta :\t");
    scanf("%d", &ta);

    // Gross Salary Calculator
    ans = 100 + (hra + da + ta);
    printf("%d", ans);
}
