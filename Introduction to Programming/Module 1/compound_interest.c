#include<stdio.h>
#include<math.h>
int main()
{
    double princial,rate,total;
    int years,timeCompounded;

    printf("Compound Interest Calculator\n");
    printf("Enter the principal amount (P): ");
    scanf("%lf",&princial);
    printf("Enter the interest rate (r): ");
    scanf("%lf",&rate);
    rate=rate/100;
    printf("Enter years (t): ");
    scanf("%d",&years);
    printf("Enter time Compounded (n): ");
    scanf("%d",&timeCompounded);


    total=princial* pow (1 + rate / timeCompounded , timeCompounded * years);

    printf("%.2lf",total);

    return 0;
}
