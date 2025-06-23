#include<stdio.h>
int main()
{
    int choice=0;
    float pounds=0.0f;
    float kilograms=0.0f;
    printf("Weight Conversion Calculator\n");
    printf("1: Pounds to Kilograms\n");
    printf("2: Kilograms to Pounds\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("Enter weight in Pounds: ");
        scanf("%f",&pounds);
        kilograms=0.4536*pounds;
        printf("Converted weight is %f",kilograms);
    }
    else if (choice==2)
    {
        printf("Enter weight in Kilograms: ");
        scanf("%f",&kilograms);
        pounds=2.205*kilograms;
        printf("Converted weight is %f",pounds);
    }
    else
    {
        printf("Invalid Choice");
    }
    
    

    return 0;
}
