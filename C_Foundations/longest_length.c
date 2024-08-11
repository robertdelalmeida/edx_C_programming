#include <stdio.h>

int main()
{
    int i, j, nOfWords, length[101];
    char word[101];
    for (i = 0; i < 101; i++)
        length[i] = 0;
    scanf("%d", &nOfWords);
    for (i = 0; i < nOfWords; i++)
    {
        scanf("%s", word);
        j = 0;
        while (word[j] != '\0')
            j++;
        length[j] = length[j] + 1;
    }
    j = 100;
    while (length[j] == 0)
        j--;
    printf("%d", j);
}

/*
#include <stdio.h>

int main(void) {

    int i, length;
    int max = 0;
    int num = 0;
    char word[101];

    scanf("%d", &num);
    for(i = 0 ; i < num ; i++){
        scanf("%s", word);
        length = 0;
        while(word[length]!='\0'){
            length++;
        }
        if (length > max)
        	max = length;
    }

    printf("%d\n", max);
    return 0;
}
*/