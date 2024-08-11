#include <stdio.h>

int main(void)
{
    int numOfGrades, i, grade;
    double newGrade, result;
    result = 0;
    scanf("%d", &numOfGrades);
    for(i = 0; i < numOfGrades; i++)
    {
        scanf("%d", &grade);
        newGrade = (double) grade;
        result = result + newGrade;
    }
    result = result / numOfGrades;
    printf("%.2lf", result);
    return 0;
}