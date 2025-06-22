#include<stdio.h>
int main()
{
    char item[30];
    float price;
    int amount;
    printf("What item would you like to buy?: ");
    scanf("%s",&item);
    printf("What is the price for each?:");
    scanf("%f",&price);
    printf("How many would you like?:");
    scanf("%d",&amount);
    printf("\n");
    printf("You have brought %d %s\n",amount,item);
    printf("The total is : $%.2f\n",price*amount);



    return 0;
}
