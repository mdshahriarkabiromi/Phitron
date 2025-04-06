#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    
    printf("Enter int value: ");
    scanf("%d", &a);
    
    printf("Enter float value: ");
    scanf("%f", &b);
    
    // Consume the newline character left in the buffer
    // getchar();
    
    printf("Enter char value: ");
    scanf("%c", &c);

    printf("Integer is %d, float is %f, character is %c\n", a, b, c);
    return 0;
}