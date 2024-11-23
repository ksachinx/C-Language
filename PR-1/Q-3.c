#include <stdio.h>
#include<conio.h>
main() {
    int fsa, sa, ans;

    // Input: Read the first and second angles
    printf("Enter the first angle: ");
    scanf("%d", &fsa);
    
    printf("Enter the second angle: ");
    scanf("%d", &sa);

    // Find  third angle
    ans = 180 - (fsa + sa);

    // Output: third angle
    printf("The third angle is: %d\n",ans);

}
