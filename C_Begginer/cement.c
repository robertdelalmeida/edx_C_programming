






#include <stdio.h>

int main()
{
    double numOfCement, numOfBags;
    int bagPrice, nOfBags;
    bagPrice = 45;
    scanf("%lf", &numOfCement);
    numOfBags = (numOfCement / 120.0) + 1;
    nOfBags = (int) numOfBags;
    printf("%d", bagPrice * nOfBags);
}