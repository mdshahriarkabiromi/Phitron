#include<stdio.h>
int main()
{
    int sum=0;
    int N;
    printf("Enter the End Value of the summation:\n");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);

    return 0;
}