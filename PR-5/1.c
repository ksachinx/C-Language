#include <stdio.h>
main()
{
    int size, i, j;
    printf("enter element :- ");
    scanf("%d", &size);

    int a[size];
    for (i = 0; i < size; i++)
    {
        printf("enter [%d]", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                printf("Duplication Elements:- %d", a[i]);
            }
        }
        printf("\n");
    }
}
