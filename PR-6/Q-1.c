
#include <stdio.h>
#include <string.h>
main()

{
    int num = 20;
    char name[num];

    printf("enter any name:-");
    scanf("%[^\n]", &name);

    char copy[num];

    for (int i = 0; i < num; i++)
    {
        copy[i] = name[i];
    }

    int length = strlen(copy);

    int l = length - 1;

    int a, i = 0;

    while (i < l)
    {
        a = copy[i];
        copy[i] = copy[l];
        copy[l] = a;
        l--;
        i++;
    }

    int condition = 0;

    for (int i = 0; i < length; i++)
    {
        if (name[i] != copy[i])
        {
            condition = 1;
            break;
        }
    }

    if (condition == 1)
    {
        printf("this name is not palindrom...");
    }
    else
    {
        printf("this name is palindrom...");
    }
}
