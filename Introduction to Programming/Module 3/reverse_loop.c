#include<stdio.h>
int main()
{
    long long int sum=0;
    for(int i=1000;i>=1;i--)
    {
     sum=sum+i;
    }
    printf("%lld",sum);

    return 0;
}