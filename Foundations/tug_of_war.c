#include <stdio.h>

int main(void)
{
    int i, totalPlayers, firstTeam, secondTeam, sumOfFirst, sumOfSecond;
    sumOfFirst = 0;
    sumOfSecond = 0;
    scanf("%d", &totalPlayers);
    for(i = 0; i < totalPlayers; i++)
    {
        scanf("%d", &firstTeam);
        scanf("%d", &secondTeam);
        sumOfFirst = sumOfFirst + firstTeam;
        sumOfSecond = sumOfSecond + secondTeam;
    }
    if (sumOfFirst > sumOfSecond)
    {
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n", sumOfFirst);
        printf("Total weight for team 2: %d\n", sumOfSecond);
    }
    else
    {
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n", sumOfFirst);
        printf("Total weight for team 2: %d\n", sumOfSecond);
    }
    return 0;
}