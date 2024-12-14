#include <stdio.h>
struct Fruit {
    char name[50];
    char color[50];
};
int main() {
    int a;
    printf("Enter the number of fruits: ");
    scanf("%d", &a);
    if (a > 100) {
        printf("Maximum allowed fruits are 100. Limiting the input to 100.\n");
        a = 100;
    }
    struct Fruit fruits[a];
    for (int i = 0; i < a; i++) {
        printf("\nEnter details for fruit %d:\n", i + 1);

        printf("Fruit name: ");
        getchar();
        fgets(fruits[i].name, sizeof(fruits[i].name), stdin);

        printf("Color: ");
        fgets(fruits[i].color, sizeof(fruits[i].color), stdin);
    }

    FILE *file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    for (int i = 0; i < a; i++) {
        fprintf(file, "Fruit Name: %s", fruits[i].name); 
        fprintf(file, "Color: %s", fruits[i].color);  
    }
    fclose(file);
    printf("\nFruit details have been written to 'data.txt' successfully.\n");
}
