// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);

    if (X>='a' && 'z'>=X)
    {
        X=X-32;
        printf("%c",X);
    }
    else if (X>='A' && 'Z'>=X)
    {
        X=X+32;
        printf("%c",X);
    }

    return 0;
}