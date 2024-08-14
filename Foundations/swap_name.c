#include <stdio.h>

int main()
{
    int nOfNames, i;
    char firstName[101], lastName[101];
    scanf("%d", &nOfNames);
    for(i = 0; i < nOfNames; i++)
    {
        scanf("%s%s", firstName, lastName);
        printf("%s %s\n", lastName, firstName);
    }
    return 0;
}

/*
#include <stdio.h>

int main(void) 
{
    int num, i;
    char first[101], last[101];
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
       scanf("%s", first);
       scanf("%s", last);
       printf("%s %s\n", last, first);
    }

    return 0;
}
*/