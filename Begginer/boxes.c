#include <stdio.h>

int main(void)
{
    int matchStick;
    int boxes;
    scanf("%d\n%d", &matchStick, &boxes);
    printf("%d\n%d", matchStick / boxes, matchStick % boxes);
}
