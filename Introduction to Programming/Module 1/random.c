#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));

    printf("%d  ",rand()%10);

    return 0;
}
