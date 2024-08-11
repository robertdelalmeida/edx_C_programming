




#include <stdio.h>

int main(void)
{
    double totalMoney, bookPrice, division;
    int numOfBooks;
    scanf("%lf%lf", &totalMoney, &bookPrice);
    division = totalMoney / bookPrice;
    numOfBooks = (int) division;
    printf("%d", numOfBooks);
}