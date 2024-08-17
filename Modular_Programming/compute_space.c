#include <stdio.h>

int main()
{
    int n, i, nb, spaceChar = 0, spaceInt = 0, spaceDouble = 0;
    char  type;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %c", &nb, &type);
        if (type == 'c') {
            spaceChar = 1 * nb;
        }
        else if (type == 'd') {
            spaceDouble = 8 * nb;
        }
        else if (type == 'i') {
            spaceInt = 4 * nb;
        }
        else {
            printf("Invalid tracking code type");
            return 0;
        }
    }
    printf("%d bytes", spaceChar + spaceDouble + spaceInt);
    return 0;
}