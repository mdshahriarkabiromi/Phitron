#include<stdio.h>
#include<ctype.h>
int main()
{
    char question [5][120]=
    {{"1.Who won the 2022 FIFA World Cup?\n"},
     {"2.What was the first World Cup trophy called?\n"},
     {"3.How many times have Italy won the World Cup so far?\n"},
     {"4.Who won the Best Young Player Award in 2018?\n"},
     {"5.Which nation has won the most World Cups?\n"}};

     char option [5][120]=
     {{"A.Argentina\nB.Brazil\nC.Germany\nD.Italy\n"},
     {"A.First World Cup\nB.Ballon d'or trophy\nC.Jules Rimet Trophy\nD.World CUP 1946\n"},
     {"A.1\nB.2\nC.3\nD.4\n"},
     {"A.Neymar\nB.D Maria\nC.Lionel Messi\nD.Kylian Mbappe\n"},
     {"A.Argentina\nB.Brazil\nC.Germany\nD.Italy\n"}
    };

    char answerKey []={'A','C','D','D','B'};
    int size=sizeof(question)/sizeof(question[0]);

    char guess = '\0';
    int score=0;

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < size; i++)
    {
        printf("%s",question[i]);
        printf("\n%s\n",option[i]);
        printf("\nEnter Your answer: ");
        scanf(" %c",&guess);
        guess=toupper(guess);
        if (guess==answerKey[i])
        {
            score+=2;
            printf("Right answer!\n");
            printf("Your score : %d\n",score);
        }
        else
        {
            printf("Wrong answer!\n");
        }   
    }
    
    printf("\n");
    printf("Quiz Completed!\n");
    printf("Your Final Score is %d",score);
    

    return 0;
}
