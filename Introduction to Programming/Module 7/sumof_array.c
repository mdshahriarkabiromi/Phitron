#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum of all array element :");
    printf("%d",sum);
    
    

    return 0;
}
