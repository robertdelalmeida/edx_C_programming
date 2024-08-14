



#include <stdio.h>

int main(void)
{
    int numOfPeople, dBirth, newBirth;
    double numOfBirth;
    scanf("%d%lf", &numOfPeople, &numOfBirth);
    dBirth = (int) numOfBirth;
    newBirth = (numOfPeople / 100.0 * dBirth);
    printf("%d", numOfPeople + newBirth);
}
