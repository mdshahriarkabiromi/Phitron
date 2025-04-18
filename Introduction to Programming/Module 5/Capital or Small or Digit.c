// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// Note:

// Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc

#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);

    if (X>='0' && '9'>=X)
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if(X>='A' && 'Z'>=X)
        {
            printf("IS CAPITAL");
        }
        else if(X>='a' && 'z'>=X)
        {
            printf("IS SMALL");
        }
        
    }
    

    return 0;
}