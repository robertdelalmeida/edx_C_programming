#include <stdio.h>

int main()
{
    int numOfRep, i;
    char word[101];
    i = -1;
    scanf("%d%s", &numOfRep, word);
    while (++i < numOfRep)
        printf("%s\n", word);
    return 0;
}

/*
#include <stdio.h>

int main(void) {
    char word[101]; 
    int num, i;

    scanf("%d", &num);
    scanf("%s", word);

    for (i=0; i<num; i++)
        printf("%s\n", word);

    return 0;
}
*/