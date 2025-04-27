#include<stdio.h>
int main()
{
    int N;
    int max=0;
    scanf("%d",&N);
    while (N--)
    {
        int X;
        scanf("%d",&X);
        if (X>max)
        {
            max=X;
        }
        else
        {
            max=max;
        }
    }
    printf("%d",max);

    return 0;
}
