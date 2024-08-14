


#include <stdio.h>

int main(void)
{
    int hours, basePrice, hoursPrice, fullPrice;
    basePrice = 10;
    hoursPrice = 5;
    fullPrice = 53;
    scanf("%d", &hours);
    if (hours <= 8)
    {
        printf("%d", basePrice + (hoursPrice * hours));
    }
    else {
        printf("%d", fullPrice);
    }
    return 0;
}
