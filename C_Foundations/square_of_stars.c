#include <stdio.h>

int main(void)
{
    int i, j, numOfStars;
    scanf("%d", &numOfStars);
    for (i = 0; i < numOfStars; i++)
    {
        for (j = 0; j < numOfStars; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

/*
#include <stdio.h>
int main() {
    int i, j;
    int n = 0;
    scanf("%d", &n);

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/