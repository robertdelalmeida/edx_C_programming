#include <stdio.h>

int main(void)
{
    char letter;
    scanf("%c", &letter);
    printf("++++%c++++\n+++%c%c%c+++\n++%c%c%c%c%c++\n+%c%c%c%c%c%c%c+\n%c%c%c%c%c%c%c%c%c\n", letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter, letter);
    return 0;
}
