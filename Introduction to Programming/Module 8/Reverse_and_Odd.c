// Problem Statement

// You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i = N-1; i >= 0; i--)
    {
        if (i%2==1)
        {
            printf("%d ",A[i]);
        }
        
        
    }
    

    return 0;
}
