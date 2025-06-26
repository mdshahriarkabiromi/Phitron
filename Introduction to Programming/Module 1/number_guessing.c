#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int guess=0;
    int tries=0;
    int min=0;
    int max=100;

    srand(time(NULL));
    int answer=(rand()% (max-min)+1)+min;
    printf("---Welcome to the Number Guessing Game---\n");

    do{
        printf("Guess a number between %d - %d:",min,max);
        scanf("%d",&guess);
        tries++;

        if(guess>answer)
        {
            printf("TOO HIGH!\n");
        }
        else if (guess<answer)
        {
            printf("TOO LOW!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }

    }while(guess != answer);
    printf("It took %d tries to guess the Number",tries);

    return 0;
}
