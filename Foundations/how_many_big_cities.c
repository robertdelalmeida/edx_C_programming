#include <stdio.h>

int main(void)
{
    int numOfCities, population, i, c;
    numOfCities = 0;
    population = 0;
    c = 0;
    scanf("%d", &numOfCities);
    for (i = 0; i < numOfCities; i++)
    {
        scanf("%d", &population);
        if (population >= 10000)
        {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}

/*
#include <stdio.h>

int main(void){
    int nbCities;
    scanf("%d", &nbCities);
    int nbBigCities = 0;
    for(int i = 0; i < nbCities ; i++)
    {
        int population;
        scanf("%d", &population);
        if(population > 10 * 1000)
        {
            nbBigCities = nbBigCities + 1;
        }
    }
    printf("%d", nbBigCities);
    return 0;
}
*/