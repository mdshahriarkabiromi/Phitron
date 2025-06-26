#include<stdio.h>
int main()
{
    int row=0;
    int column=0;
    char symbol='\0';
    printf("Enter the Number of Row: ");
    scanf("%d",&row);
    printf("Enter the Number of Column: ");
    scanf("%d",&column);
    printf("Enter the Symbol: ");
    scanf(" %c",&symbol);
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%c\n",symbol);
        }
        printf("\n");
        
    }
    

    return 0;
}
