#include<stdio.h>
// int main()
// {
//     int a;
//     float b;
//     char c;
    
//     printf("Enter int value: ");
//     scanf("%d", &a);
    
//     printf("Enter float value: ");
//     scanf("%f", &b);
    
//     // Consume the newline character left in the buffer
//     // getchar();
    
//     printf("Enter char value: ");
//     scanf("%c", &c);

//     printf("Integer is %d, float is %f, character is %c\n", a, b, c);
//     return 0;
// }
// int main()
// {
// int i = 5;
// while(i<10)
// {
// printf("i");
// i++;
// }
// }

#include<stdio.h>
int main()
{
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");
    
    // Get and save the number the user types
    scanf("%d", &myNum);
    
    // Output the number the user typed
    printf("Your number is: %d", myNum);

    return 0;
}