#include <stdio.h>

int main()
{
    float P;
    float t;
    float r;
    float si;

    printf("Enter  Value ofPrincipal amt tiem and rate of intrest");
    scanf("%f %f %f", &P, &t, &r);
    si = (P * r * t) / 100;
    printf("The simple intrest is =%f", si);
    return 0;
}