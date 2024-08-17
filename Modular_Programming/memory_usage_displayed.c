#include <stdio.h>

void found_space(int nb)
{
    int mb, kb, b;
    mb = nb / 1000000;
    kb = (nb % 1000000) / 1000;
    b = nb % 1000;
    
    if (mb > 0)
        printf("%d MB and %d KB and %d B", mb, kb, b);
    else if (kb > 0)
        printf("%d KB and %d B", kb, b);
    else
        printf("%d B", b);
}

int main()
{
    int n, spaceChar, spaceInt, spaceDouble, spaceShort;
    char type;
    scanf("%c %d", &type, &n);
    if (type == 'c') {
        spaceChar = sizeof(char) * n;
        found_space(spaceChar);
    }
    else if (type == 'd') {
        spaceDouble = sizeof(double) * n;
        found_space(spaceDouble);
    }
    else if (type == 'i') {
        spaceInt = sizeof(int) * n;
        found_space(spaceInt);
    }
    else if (type == 's') {
        spaceShort = sizeof(short) * n;
        found_space(spaceShort);
    }
    return 0;
}