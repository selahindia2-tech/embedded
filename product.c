#include <stdio.h>

struct Product
{
    int productID;
    char name[30];
    int quantity;
    float price;
};

int main()
{
    struct Product p[5];

    int i, max = 0;
    float total = 0;

    // Getting product details from user
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Product %d\n", i + 1);

        printf("Enter Product ID: ");
        scanf("%d", &p[i].productID);

        printf("Enter Product Name: ");
        scanf("%29s", p[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &p[i].price);
    }

    // Calculate total inventory value
    for(i = 0; i < 5; i++)
    {
        total = total + (p[i].quantity * p[i].price);

        if(p[i].price > p[max].price)
        {
            max = i;
        }
    }

    printf("\nTotal Inventory Value = %.2f\n", total);

    printf("\nProduct with Highest Price:\n");

    printf("Product ID: %d\n", p[max].productID);
    printf("Product Name: %s\n", p[max].name);
    printf("Quantity: %d\n", p[max].quantity);
    printf("Price: %.2f\n", p[max].price);

    return 0;
}
