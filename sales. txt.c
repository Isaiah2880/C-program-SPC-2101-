/*
NAME: ISAIAH OTIENO
REGISTRATION NUMBER: PA106/G/28801/25
DESCrIPTION:C program that records all sales transactions in a retail shop,reads them from a file, and calculates total sales for the day.
*/

#include <stdio.h>
#include <stdlib.h>

struct Sale {
    char item[50];
    int quantity;
    float price;
    float cost;
};

int main(void) {
    struct Sale s;
    FILE *fp;
    char choice;
    float total_sales = 0;

    fp = fopen("sales.dat", "ab");
    if (fp == NULL) {
        perror("Error opening sales.dat");
        return 1;
    }

    printf("WELCOME TO ISAIAH'S RETAIL SHOP\n");
    printf("---------------------------------\n");

    while (1) {
        printf("\nEnter item name: ");
        scanf("%s", s.item);

        printf("Enter quantity: ");
        scanf("%d", &s.quantity);

        printf("Enter price per item: ");
        scanf("%f", &s.price);

        s.cost = s.quantity * s.price;

        fwrite(&s, sizeof(struct Sale), 1, fp);
        printf("Transaction recorded: %s | Qty: %d | Cost: %.2f\n", s.item, s.quantity, s.cost);

        printf("Do you want to enter another transaction? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N')
            break;
    }

    fclose(fp);
    printf("\nAll transactions have been saved to sales.dat\n");

    fp = fopen("sales.dat", "rb");
    if (fp == NULL) {
        perror("Error reading sales.dat");
        return 1;
    }

    printf("\nTODAY'S SALES RECORDS\n");
    printf("---------------------------------\n");

    while (fread(&s, sizeof(struct Sale), 1, fp)) {
        printf("Item: %-10s | Quantity: %2d | Price: %.2f | Cost: %.2f\n",
               s.item, s.quantity, s.price, s.cost);
        total_sales += s.cost;
    }

    fclose(fp);

    printf("---------------------------------\n");
    printf("TOTAL SALES FOR THE DAY: Ksh %.2f\n", total_sales);
    printf("File closed successfully.\n");

    return 0;
}