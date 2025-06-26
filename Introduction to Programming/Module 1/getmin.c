#include<stdio.h>

int getMin(int num1,int num2)
{
    if(num1>num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}
int main()
{
    int min=getMin(10,4);
    printf("%d",min);
    

    return 0;
}
