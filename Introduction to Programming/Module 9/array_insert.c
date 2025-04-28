#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N+1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    int idx,val;
    scanf("%d %d",&idx,&val);
    for (int i = N; i >=idx+1; i--)
    {
        A[i]=A[i-1];
    }
    A[idx]=val;

    for (int i = 0; i < N+1; i++)
    {
        printf("%d",A[i]);
    }
    


    return 0;
}
