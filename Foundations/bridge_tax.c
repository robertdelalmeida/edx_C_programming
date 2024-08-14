#include <stdio.h>

int main(void)
{
    int diceOne, diceTwo, sum;
    scanf("%d%d", &diceOne, &diceTwo);
    sum = diceOne + diceTwo;
    if (sum >= 10)
    {
        printf("Special tax\n36");
    }
    else
    {
        printf("Regular tax\n%d", sum * 2);
    }
    return 0;
}