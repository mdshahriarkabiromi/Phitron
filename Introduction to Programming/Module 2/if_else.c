#include<stdio.h>
int main()
{
    int tk;
    printf("Enter the ammount you have now: ");
    scanf("%d",&tk);
    if(tk>=100)
    {
        printf("I will have a burger");
    }
    else
    {
        printf("I wont have a burger");
    }
    return 0;
}