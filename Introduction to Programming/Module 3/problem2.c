// Write a c program to print all odd number from 100 to 1
#include<stdio.h>
int main()
{
    int i=100;
    while (i>=0)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i--;
    }
    return 0;
}