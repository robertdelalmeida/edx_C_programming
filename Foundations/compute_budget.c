#include <stdio.h>

int main(void)
{
    int budget, sum;
    budget = 0;
    sum = 0;
    scanf("%d", &budget);
    if (budget > 0)
        sum = budget;
    while (budget != -1)
    {
        scanf("%d", &budget);
        if (budget > 0)
            sum = sum + budget;
    }
    printf("%d", sum);
}

/*n
#include <stdio.h>

int main()
{
    int expense;
    scanf("%d",&expense);
    int sumOfExpenses = 0;
    while (expense != -1)
    {
        sumOfExpenses = sumOfExpenses + expense;
        scanf("%d",&expense);
    }
    printf("%d",sumOfExpenses);

    return 0;
}
*/