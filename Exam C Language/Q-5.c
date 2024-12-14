#include <stdio.h>
struct Laptop {
    char company_name[50];
    char processor[50];
    float price;
};
main() {
    int s;
    printf("Enter the number of laptops: ");
    scanf("%d", &s);
    struct Laptop laptops[s];
    for (int i = 0; i < s; i++) {
        printf("\nEnter details for laptop %d:\n", i + 1);      
        printf("Company Name: ");
        getchar();
        fgets(laptops[i].company_name, sizeof(laptops[i].company_name), stdin);       
        printf("Processor: ");
        fgets(laptops[i].processor, sizeof(laptops[i].processor), stdin);       
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }

    printf("\nLaptop Details:\n");
    for (int i = 0; i < s; i++) {
        printf("\nLaptop %d Details:\n", i + 1);
        printf("Company Name: %s", laptops[i].company_name);
        printf("Processor: %s", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
    }
}
