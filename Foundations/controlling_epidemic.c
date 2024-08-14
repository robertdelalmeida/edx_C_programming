#include <stdio.h>

int main()
{
    int totalPopulation, newInfected, totalInfected, days;
    scanf("%d", &totalPopulation);
    days = 1;
    totalInfected = 0;
    newInfected = 1;
    while (newInfected < totalPopulation)
    {
        newInfected = newInfected * 3;
        totalInfected = totalInfected + newInfected;
        days++;
    }
    printf("%d", days);
}

/*
#include <stdio.h>

int main()
{
    int day = 1;
    int contaminated = 1;
    int population;

    scanf("%d", &population);

    while (contaminated < population)
    {
        day++;
        contaminated *= 3;
    }

    printf("%d", day);

    return 0;
}
*/
