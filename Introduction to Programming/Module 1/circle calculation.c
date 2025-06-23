#include<stdio.h>
#include<math.h>
int main()
{
    float radius;
    const float PI=3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    printf("Area: %.2f\n",PI*pow(radius,2));
    printf("Surface Area: %.2f\n",4*PI*pow(radius,2));
    printf("Volume: %.2f\n", (4.0/3.0) * PI * pow(radius, 3));

    return 0;
}
