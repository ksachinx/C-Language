#include <stdio.h>
main()
{
    int i, size, j;
    printf("enter size");
    scanf("%d", &size);

    int a[size];

    for (i = 0; i < size; i++)
    {
        printf("element  [%d] :-", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] + a[j] == 5)
            {

                printf("%d %d ", a[i], a[j]);
            }
        }
        printf("\n");
    }
}
