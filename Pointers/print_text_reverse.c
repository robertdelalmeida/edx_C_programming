#include <stdio.h>

int main()
{
    char text[68][41];
    int i, j;

    for (i = 0; i < 68; i++)        
        scanf("%s", text[i]);

    for (j = 67; j >= 0; j--) {
        printf("%s", text[j]);
        if (j != 0)
            printf(" ");
    }
    return 0;
}