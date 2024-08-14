#include <stdio.h>

int main()
{
    int i;
    char name[51];
    i = 0;
    scanf("%s", name);
    while (name[i] != '\0')
        i++;
    if (i % 2)
        printf("2");
    else
        printf("1");
    return 0;
}

/*
#include <stdio.h>

int main(void) {
    char name[51];
    int i=0;

    scanf("%s", name);
    while(name[i] != '\0')
        i++;

    if (i%2 == 0) 
        printf("1");
    else 
        printf("2");

    return 0;
}
*/