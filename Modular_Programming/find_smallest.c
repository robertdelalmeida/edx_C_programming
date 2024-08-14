#include <stdio.h>

int min(int, int);

int main()
{
    int n, i, j, smallest, num = 0, number;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    j = 0;
    smallest = array[0];
    number = array[0];
    while (j < n)
    {
        num = min(array[j], smallest);
        if (num < number)
            number = num;
        j++;
    }
    printf("%d", number);
    return 0;
}

int min(int a, int b)
{
    if (a < b)
        b = a;
    return b;
}