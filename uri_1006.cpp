#include <stdio.h>
#define cons1 2
#define cons2 3
#define cons3 5

int main()
{
    double a, b, c;
    float result;

    scanf("%lf %lf %lf", &a, &b, &c);


    result = (a*cons1 + b*cons2 + c*cons3)/10.0;


    printf("MEDIA = %.1f\n", result);
    return 0;
}
