#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c);

int main(void)
{
    int index = 0;
    scanf("%d", &index); // number of elements defined by the user
    int array[index], readNumber, sum, average;
    int i;
    readNumber = 0;
    sum = 0;
    i = 0;
    while (i < index)
    {
        scanf("%d", &readNumber); // catch the weight of the car
        array[i] = readNumber; // store the weight of the car in the array
        sum = sum + readNumber;
        i++; // sum the weight of every car
    }
    average = sum / index; // take the average
    while (--i >= 0)
    {
        array[i] = average - array[i]; // catch the value of output and save on the array
    }
    while (++i < index)
    {
        ft_putnbr(array[i]); // print the values of weight discounted 
    }
    return 0;
}

void ft_putnbr(int nb)
{
    int i;

    i = 0;
    if (nb < 0)
    {
        ft_putchar('-');
        i = nb *(-1);
    }
    if (nb >= 0)
    {
        i = nb;
    }
    if (i)
    {
        if (i >= 10)
            ft_putchar(i / 10 + '0');
        ft_putchar(i % 10 + '0');
        ft_putchar('.');
        ft_putchar('0');
        ft_putchar('\n');
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}










/*
nt main(void)
{
    int nbBoxCars, carNumber;
    double weights[50];
    double totalWeight = 0.0;
    double averageWeight;
    
    scanf("%d\n",&nbBoxCars);
    for (carNumber = 0; carNumber < nbBoxCars; carNumber = carNumber + 1)
    {
        scanf("%lf",&weights[carNumber]);
        totalWeight = totalWeight + weights[carNumber];
    }

    averageWeight = totalWeight / nbBoxCars;

    for (carNumber = 0; carNumber < nbBoxCars; carNumber = carNumber + 1)
    {
        printf("%.1lf\n",averageWeight - weights[carNumber]);
    }
    return 0;
}
*/