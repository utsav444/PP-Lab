#include <stdio.h>

struct Item {
    char name[50];
    int quan;
    float price;
};

struct Patient {
    char name[50];
    int Quantity;
    struct Item items[10];
};

int main() {
    struct Patient pat;

    printf("Enter Patient name: ");
    scanf("%s", pat.name);

    printf("Enter number of items: ");
    scanf("%d", &pat.Quantity);

    for (int i = 0; i < pat.Quantity; i++) {
        printf("Enter Names of items %d: ", i + 1);
        scanf("%s", pat.items[i].name);

        printf("Enter Quantity of item %d: ", i + 1);
        scanf("%d", &pat.items[i].quan);

        printf("Enter Price of items %d: ", i + 1);
        scanf("%f", &pat.items[i].price);
    }

    printf("\n\n");
    printf("\n");
    printf("Patient Bill                    \n");
    printf("\n");
    printf("Patient Name: %s\n", pat.name);
    printf("Item Name     Quantity     Price\n");
    printf("\n");

    int totalAmount = 0.0;

    for (int i = 0; i < pat.Quantity; i++) {
        float itemTotal = pat.items[i].quan * pat.items[i].price;
        totalAmount += itemTotal;
        printf("%-s              %-d            %-.2f\n", pat.items[i].name, pat.items[i].quan, itemTotal);
    }

    printf("\n");
    printf("\n");
    printf("Total: %d Rupees \n", totalAmount);
    printf("\n");

    return 0;
}

