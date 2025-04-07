#include<stdio.h>
int main()
{
    int money;
    printf("Enter the ammount of money you have now: \n");
    scanf("%d",&money);

    if (money>=5000)
    {
        printf("Will go to cox's bazar\n");
        if (money>=10000)
        {
            printf("Will go to saintmartin too\n");
        }
        else
        {
            printf("but Wont go to saintmartin\n");
        }
        
    }
    else
    {
        printf("Wont go to cox's bazar\n"); 
    }
    

    return 0;
}