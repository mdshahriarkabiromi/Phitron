//Take a number from user and check if its a even number or odd number.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("The Number is even");
    }
    else
    {
        printf("The Number is odd");
    }
    

    return 0;
}