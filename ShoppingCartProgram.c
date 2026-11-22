#include <stdio.h>

int main()
{
    //shopping cart program

    //declaring variables that i need.

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;


    //user input:

    printf("What item would u like to buy?: ");
    fgets(item, sizeof(item), stdin);


    printf("What is the price for each?: ");
    scanf("%f", &price);


    printf("How many would you like?: ");
    scanf("%d", &quantity);

    //calculating total

    total = price * quantity;



    //displaying total
    printf("total: %c%.2f", currency, total);

    printf("\nYou have bought: %d %s", quantity, item);

    return 0;
}
