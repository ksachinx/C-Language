#include <stdio.h>

main()
{
    FILE *evenFile, *oddFile;

    evenFile = fopen("even_file.txt", "w");
    oddFile = fopen("odd_file.txt", "w");

    if (evenFile == NULL || oddFile == NULL)
    {
        printf("Error opening the files!\n");
        return 1;
    }

    fprintf(evenFile, "Even numbers from even_file.txt:\n");
    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(evenFile, "%d", i);
            if (i < 70)
            {
                fprintf(evenFile, ", ");
            }
        }
    }
    fprintf(evenFile, "\n");

    fprintf(oddFile, "Odd numbers from odd_file.txt:\n");
    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(oddFile, "%d", i);
            if (i < 69)
            {
                fprintf(oddFile, ", ");
            }
        }
    }
    fprintf(oddFile, "\n");

    fclose(evenFile);
    fclose(oddFile);

    printf("Even and Odd numbers have been written to respective files.\n");
}
