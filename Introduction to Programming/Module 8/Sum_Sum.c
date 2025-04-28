// Problem Statement

// You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    int V[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&V[i]);
    }
    int p_sum=0;
    int n_sum=0;
    for (int i = 0; i < N; i++)
    {
        if (V[i]>0)
        {
            p_sum=p_sum+V[i];
        }
        else
        {
            n_sum=n_sum+V[i];
        } 
    }
    printf("%d %d",p_sum,n_sum);
    

    return 0;
}