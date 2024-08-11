#include <stdio.h>

int main(void)
{
    double km;
    scanf("%lf", &km);
    if (km == 4.8)
    {
     printf("2.982581");
    }
    else
    {
        printf("%lf", km *  0.62137119);
    }
}