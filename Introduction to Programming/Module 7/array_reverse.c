#include<stdio.h>
int main()
{
    int n;
    int arr[n];
    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Normal array printing:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("Reverse array printing:\n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d",arr[i]);
    }
    
    

    return 0;
}
