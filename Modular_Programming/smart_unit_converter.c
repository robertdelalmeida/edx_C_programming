#include <stdio.h>

int main()
{
    char letter;
    int n;
    double nToConvert;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf %c", &nToConvert, &letter);
        if (letter == 'm')
            printf("%lf ft", nToConvert *= 3.2808);
        else if (letter == 'g')
            printf("%lf lbs", nToConvert *= 0.002205);
        else if (letter == 'c')
            printf("%lf f", 32 + (1.8 * nToConvert));
    }
}