#include<stdio.h>

typedef struct 
{
    char name[50];
    int year;
    int price;
}car;
int main()
{
    car car1={"Mustang",2024,25000};
    car car2={"Ferari",2025,28000};

    printf("%s\n",car1.name);
    printf("%d\n",car1.year);
    printf("%d\n",car1.price);

    return 0;
}
