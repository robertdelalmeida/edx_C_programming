#include <stdio.h>

int sumOfDigits(int nb) {
    if (nb < 10)
        return nb;
    else
        return ((nb % 10) + sumOfDigits(nb / 10));
}

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    if (n < 10)
        printf("%d", n);
    else {
        sum = sumOfDigits(n);
        printf("%d", sum);
    }
}