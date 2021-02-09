#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *i)
{
    printf("Enter the product name: \n");
    scanf("%s", i->itemName);

    printf("Enter the price: \n");
    scanf("%f", &i->price);

    printf("Enter the quantity: \n");
    scanf("%d", &i->quantity);

    i->amount = (float)i->quantity * i->price;
}
void printItem(struct item *i)
{
    printf("name: %s \n", i->itemName);
    printf("quantity: %d \n", i->quantity);
    printf("price: %f \n", i->price);
    printf("amount: %f \n", i->amount);
}

int main()
{
    struct item itm;
    struct item *pItem;

    pItem = &itm;

    pItem->itemName = (char *)malloc(30 * sizeof(char));

    if (pItem == NULL)
        exit(-1);

    readItem(pItem);

    printItem(pItem);

    free(pItem->itemName);

    return 0;
}
