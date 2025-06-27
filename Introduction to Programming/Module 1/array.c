#include<stdio.h>
int main()
{
    int arr[5]={0};
    for (int i = 0; i <5; i++)
    {
        printf("Enter an value:");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)

    {
        printf("%d ",arr[i]);
    }
    return 0;
}
