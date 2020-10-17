#include <stdio.h>
# define cons1 3.5
# define cons2 7.5

int main()
{
    double A, R;
    float result;

    scanf("%lf %lf", &R, &A);


    result = (R*cons1 + A*cons2)/11.0;


    printf("MEDIA = %.5f\n", result);
    return 0;
}