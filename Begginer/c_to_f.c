#include <stdio.h>

int main(void)
{
    double celsius;
    scanf("%lf", &celsius);
    printf("%.1lf", celsius * 1.8 + 32);
}