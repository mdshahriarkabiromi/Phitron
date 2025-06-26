#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{

    int user_choice=0;
    int max=3;
    int min=1;
    srand(time(NULL));
    int choice =(rand() % (max-min)+1)+min;


    printf("---Welcome to the Rock Paper & Scissor Game---\n");
    printf("Enter 1 for Rock\n");
    printf("Enter 2 for Paper\n");
    printf("Enter 3 for Scissor\n");
    scanf("%d",&user_choice);
    

    switch (user_choice)
    {
    case 1:
        printf("You choose Rock\n");
        break;
    case 2:
        printf("You choose Paper\n");
        break;
    case 3:
        printf("You choose Sciccor\n");
        break;
    
    default:
        break;
    }

    switch (choice)
    {
    case 1:
        printf("Computer choose Rock\n");
        break;
    case 2:
        printf("Computer choose Paper\n");
        break;
    case 3:
        printf("Computer choose Sciccor\n");
        break;
    
    default:
        break;
    }
if (choice==user_choice)
{
    printf("Its a tie!");
}
else if (choice==3 && user_choice==1)
{
    printf("You Win!");
}
else if (choice==2 && user_choice==1)
{
    printf("You Loss!");
}
else if (choice==1 && user_choice==2)
{
    printf("You Win!");
}
else if (choice==3 && user_choice==2)
{
    printf("You Loss!");
}
else if (choice==1 && user_choice==3)
{
    printf("You Loss!");
}
else if (choice==2 && user_choice==3)
{
    printf("You Win!");
}
    return 0;
}
