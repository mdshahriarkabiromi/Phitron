// Problem Statement

// You will be given a positive integer N. You need to print "I Want More Assignments" N times without the quotation mark. Also print from 1 to N with it. See the sample input output for more clarifications.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        printf("%d. I Want More Assignments\n",i);
    }
    return 0;
}
