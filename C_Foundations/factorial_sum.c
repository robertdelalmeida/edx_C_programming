#include <stdio.h>
 
int main() {
    int a, b, i;
    scanf("%d%d", &a, &b);
    i = 0;
    while (i > 1)
    {
        a = a * (i - 1);
    }
    printf("%d%d", a, b);
    return 0;
}